#include "main.h"

/**
 * set_env - set an environment variable
 * @argv: list of arguments to the program
 */

int set_env(char *argv[])
{
	char* var_name = argv[1];
	char* var_val = argv[2];
	char* var_str;
	int len = strlen(var_name) + strlen(var_val) + 2;

	var_str = malloc(len);
	snprintf(var_str, len, "%s=%s", var_name, var_val);

	if (argv[1] == NULL || argv[2] == NULL)
	{
		fprintf(stderr, "Too few arguments.\n");
		return (1);

	}
	if (setenv(argv[1], argv[2], 1) != 0 )
	{
		perror("Error: setenv");
		return (1);

	}
	return (1);
	free(var_str);
}

/**
 * unset_env - remove an environment variable
 * @argv: list of arguments to the program
 */

int unset_env(char *argv[])
{
	if (argv[1] == NULL)
	{
		fprintf(stderr, "Too few arguments");
		return (1);
	}
	if (unsetenv(argv[1]) != 0)
	{
		perror("Error");
		return (1);
	}
	return (1);
}

/**
 * print_env - print environment vars
 * @argv: list of arguments to the program
 */

void print_env(char *argv[])
{
	char *name;
	int i = 0;

	name = getenv(argv[1]);
	if (strcmp(argv[0], "printenv") == 0 && argv[1] == NULL)
	{
		while (environ[i] != NULL)
		{
			printf("%s\n", environ[i]);
			i++;
		}
	}
	if (name != NULL)
	{
		printf("%s\n", name);
	}	
}
