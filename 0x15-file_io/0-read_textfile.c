#include "main.h"

/**
 * read_textfile - read text from a file.
 * @filename: the name of the file.
 * @letters: number of characters to read.
 * Return: the actual number of bytes read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n;
	ssize_t result;
	char *buff;

	if (!filename || !letters)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	
	buff = malloc(sizeof(char) * letters + 1);
	if (!buff)
		return (0);

	result = read(fd, buff, letters);

	if (result == -1)
	{
		free(buff);
		return (0);
	}

	buff[letters] = '\0';

	n = write(STDOUT_FILENO, buff, result);
	if (n == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);

	return (result);
}
