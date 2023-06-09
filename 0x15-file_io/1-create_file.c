#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: content to be written in the file
 * Return: the 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, n, len = 0;

	if (!filename)
	{
		return (-1);
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	while (text_content && text_content[len])
	{
		len++;
	}
	n = write(file, text_content, len);

	if (n == -1)
	{
		return (-1);
	}
	return (1);
}
