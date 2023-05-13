#include "main.h"

/**
 * execcmd - execute the command
 * @argv: the array of arguments
 */

void execcmd(char *argv[])
{
	char *cmd = NULL, *path;
	char comm[100];
	int x;

	if (argv)
	{
		cmd = argv[0];
		path = getPath(cmd);
		x = execve(path, argv, NULL);
		if (x == -1)
		{
			printf("%d\n", x);
			strcpy(comm, argv[0]);
			if (strcmp(comm, "history") == 0)
			{
				getHistory();
			}
			else if (strcmp(comm, "exit") == 0)
			{
				exit(0);
			}
			else if (strcmp(comm, "clear") == 0)
			{
				system("clear");
			}
			else if (strcmp(comm, "cd") == 0)
			{
				change_dir(argv);
			}
			system(comm);
		}
	}
}
