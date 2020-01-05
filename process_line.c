#include "monty.h"

int stack_value = 0;

/**
 * process_line - Function that process the command of a line
 *
 * @line: String with the command line
 * @line_number: The number of the line in the file
 * @stack: The stack to process
 *
 * Return: 0
 */
void process_line(char *line, unsigned int line_number, stack_t **stack)
{
	char *token = strtok(line, STR_DELIM);
	void (*gof)(stack_t **stack, unsigned int line_number);

	/* printf("line: %i token: %s\n", line_number, token); */
	if (token == NULL)
		return;

	gof = get_op_func(token);

	if (gof == NULL)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number,
			token);
		exit(EXIT_FAILURE);
	}

	if (strcmp(token, "push") == 0)
	{
		token = strtok(NULL, STR_DELIM);
		stack_value = atoi(token);
		/* printf("stack_value: %i\n", stack_value); */
	}

	gof(stack, line_number);
}
