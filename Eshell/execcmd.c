#include "main.h"

/**
 * execcmd - execute the command
 * @argv: the array of arguments
 */

void execcmd(char *argv[])
{
	char *cmd = NULL, *path;
	int x;

	if (argv)
	{
		cmd = argv[0];
		path = getPath(cmd);
		x = execve(path, argv, NULL);
		if (x == -1)
		{
			perror("Error");
		}
		if (strcmp(argv[0],"exit") == 0)
        {
                exit(0);
        }
        else if (strcmp(argv[0],"cd") == 0)
        {
                change_dir(argv);
        }
        else if (strcmp(argv[0],"clear") == 0)
        {
                system("clear");
        }
        else if (strcmp(argv[0], "env") == 0)
        {
                printf("%s", getenv(argv[1]));
        }
        else  if (strcmp(argv[0], "history") == 0)
        {
                getHistory();
	}

	}
}
