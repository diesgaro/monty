#include "monty.h"
/**
 * op_push - Function that push
 *
 * @stack: Defined stack
 * @line_number: Line number to the file to process
 *
 * Return: 0
 */
void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	(void)line_number;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->prev = NULL;
	new_node->n = stack_value;

	if (*stack == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}

	*stack = new_node;
}

/**
 * op_pall - Function that pall
 *
 * @stack: Defined stack
 * @line_number: Line number to the file to process
 *
 * Return: 0
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp_stack = *stack;
	(void)line_number;

	while (tmp_stack != NULL)
	{
		printf("%d\n", tmp_stack->n);
		tmp_stack = tmp_stack->next;
	}
}

/**
 * op_pint - Function that pint
 *
 * @stack: Defined stack
 * @line_number: Line number to the file to process
 *
 * Return: 0
 */
void op_pint(stack_t **stack, unsigned int line_number)
{
	(void)*stack;
	(void)line_number;
	printf("op_pint\n");
}

/**
 * op_pop - Function that pop
 *
 * @stack: Defined stack
 * @line_number: Line number to the file to process
 *
 * Return: 0
 */
void op_pop(stack_t **stack, unsigned int line_number)
{
	(void)*stack;
	(void)line_number;
	printf("op_pop\n");
}

/**
 * op_swap - Function that swap
 *
 * @stack: Defined stack
 * @line_number: Line number to the file to process
 *
 * Return: 0
 */
void op_swap(stack_t **stack, unsigned int line_number)
{
	(void)*stack;
	(void)line_number;
	printf("op_swap\n");
}
