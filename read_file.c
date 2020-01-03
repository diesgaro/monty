#include "monty.h"
/**
 * read_file - Function that read the content of a file
 *
 * @filename: Name of the file
 *
 * Return: 0
 */

int read_file(char *filename)
{
	FILE *fp;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 0;

	fp = fopen(filename, "r");

	if (fp == NULL)
		exit(EXIT_FAILURE);

	while ((read = getline(&line, &len, fp)) != -1)
	{
		line_number++;
		process_line(line, line_number);
	}

	free(line);
	return (0);
}
