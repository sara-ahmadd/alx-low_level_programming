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
	char buff[1024];

	fd = open(filename, O_RDONLY);

	if (fd == -1 || !filename)
		return (0);

	result = read(fd, buff, letters);

	if (result == -1)
		return (0);

	n = write(STDOUT_FILENO, buff, result);
	if (n == -1)
		return (0);

	close(fd);

	return (result);
}
