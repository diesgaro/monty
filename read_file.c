#include "monty.h"
/**
 * read_file - Function that read the content of a file
 *
 * @filename: Name of the file
 *
 * Return: 0
 */

void read_file(char *filename)
{
	FILE *fp;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 0;
	stack_t *stack = NULL;

	fp = fopen(filename, "r");

	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, fp)) != -1)
	{
		line_number++;
		process_line(line, line_number, &stack);
	}

	free(line);
	fclose(fp);
	free_stack(stack);
}
