#include "main.h"

/**
 * execcmd - execute the command
 * @argv: the array of arguments
 */

void execcmd(char *argv[])
{
	char *cmd = NULL, *path;
	int x;
	pid_t pid;

	if (argv[0] != NULL)
	{
		pid = fork();
	}
	if (pid == -1)
	{
		perror("Error with fork.");
	}

	if (pid == 0)
	{
		cmd = argv[0];
		path = getPath(cmd);
		x = execve(path, argv, NULL);
		if (x == -1)
		{
			perror("Error: ");
		}
	}
	else
	{
		wait(NULL);
	}
}
