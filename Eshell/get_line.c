#include "main.h"

/**
 * get_line - gets the user input
 * @line: the command
 * @len: the length of the command
 * @fp: the pointer to the file to read fro m(stdin)
 *
 * Return: number of read characters
 */

ssize_t get_line(char **line, size_t *len, FILE fp)
{
	char buff[100] = "Error: bad arguments";
	char read_buff[150];
	size_t read_chars;

	if (line == NULL || len == NULL || fp == NULL)
	{
		write(STDERR_FILENO, &buff ,100);
		return (-1);
	}
	
	if (*line == NULL)
	{
		*len = sizeof(read_buff);
		*line = malloc(*len);
		if (*line == NULL)
		{
			perror("Error: can't allocate memory");
			return (-1);
		}
	}
	(*line)[0] = '\0';


	return (-1);
}
