#include "main.h"


/**
 * append_text_to_file - add text to a file
 * @filename: the name of the file
 * @text_content: content to be written to the file
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, n, len = 0;

	file = open(filename, O_ APPEND);

	if (file == -1)
	{
		return (-1);
	}

	while (text_content && text_content[len])
	{
		len++;
	}

	n = write(file, text_content, len);

	if (n == -1)
	{

		return (-1);
	}
	close(file);
	return (1);
}
