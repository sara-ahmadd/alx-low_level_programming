#include "main.h"

/**
 * main - entery point
 * @argc: count of the arguments
 * @argv: array of the arguments
 * Return: zero or non-zero
 */

int main(int argc, char **argv)
{
	int fd_1, fd_2, read_len, n;
	char *buff, file_from, file_to;

	buff = NULL;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n",
				strlen("Usage: cp file_from file_to"));
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_1 = open(file_from, O_RDONLY);
	fd_2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0644);

	buff = malloc(sizeof(char) * BUFF_SIZE);


	if (fd_1 == -1 || !buff)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}	

	read_len = read(fd_1, buff, BUFF_SIZE);

	if (read_len == -1)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}


	if (fd_2 == -1 || !buff)
	{
		free(buff);
		printf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	n = write(fd_2, buff, BUFF_SIZE);

	if (n == -1)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
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
