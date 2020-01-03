#include "monty.h"
/**
 * process_line - Function that process the command of a line
 *
 * @line: String with the command line
 * @line_number: The number of the line in the file
 *
 * Return: 0
 */

int process_line(char *line, unsigned int line_number)
{
	char *token = strtok(line, STR_DELIM);
	void (*gof)(void);

	printf("line: %i token: %s\n", line_number, token);

	gof = get_op_func(token);

	gof();
	/*while (token != NULL)
	{
		printf("line: %i token: %s\n", line_number, token);
		token = strtok(NULL, STR_DELIM);
	}*/

	return (0);
}
