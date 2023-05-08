#include "main.h"


static ssize_t read_file(char *file, char **buf, int fd);
static void write_copy(char *file, int fd, char *buf, int len);




/**
 * main - entery point
 * @argc: count of the arguments
 * @argv: array of the arguments
 * Return: zero or non-zero
 */

int main(int argc, char *argv[])
{
	int fd_1, fd_2, read_len = 1, n, closing, closing_2;
	char *buff, *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_1 = open(file_from, O_RDONLY);
	fd_2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	buff = malloc(sizeof(char) * BUFF_SIZE);

	while (read_len > 0)
	{
		read_len = read_file(file_from, buff, fd_1);
		if (!read_len)
			break;

	if (fd_2 == -1 || !buff)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	n = write(fd_2, buff, BUFF_SIZE);
	if (n == -1)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	}
	free(buff);
	closing = close(fd_1);
	if (closing < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	closing_2 = close(fd_2);
	if (closing_2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	return (0);
}

/**
 * read_file - read content of a file
 * @file: the targeted file
 * @buff: the buffer
 * @fd: the file description
 *
 * Return: 1 or -1
 */
static ssize_t read_file(char *file, char *buff, int fd)
{
	int rd_len;

	if (fd == -1 || !buff)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}

	rd_len = read(fd, buff, BUFF_SIZE);
	if (rd_len == -1)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	return (rd_len);
}

