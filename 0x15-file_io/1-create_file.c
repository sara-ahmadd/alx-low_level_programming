#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: content to be written in the file
 * Return: the 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, n;

	if (!filename)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_CREAT, 0644);

	n = write(file, text_content ? text_content : "", strlen(text_content));

	if (n == -1)
	{
		return (-1);
	}
	return (1);
}
