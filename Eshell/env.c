#include "main.h"

/**
 * env_vars - return value of environment variable
 *@argv: list of input args

 * Return: value
 */

void env_vars(char *argv[], char* envp[])
{
	int i;
	char cwd[200];

	if (strcmp(argv[0], "env") == 0)
	{
		if (getcwd(cwd, sizeof(cwd)) == NULL)
		{
			perror("Error");
		}
		else
		{
			setenv("PWD", cwd, 1);
		}

		for (i = 0; envp[i] != NULL; i++)
		{
			printf("%s\n", envp[i]);
		}
	}
}
