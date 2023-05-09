#include "main.h"

/**
 * execcmd - execute the command
 * @argv: the array of arguments
 */

void execcmd(char *argv[])
{
	char *cmd = NULL;
	int x;

	if (argv)
	{
		cmd = argv[0];
		x = execve(cmd, argv, NULL);
		if (x == -1)
		{
			perror("Error");
		}

	}
}
