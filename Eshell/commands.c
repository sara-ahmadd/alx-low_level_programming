#include "main.h"

/**
 * comm_handle - handle commands
 * @argv: list of arguments to program
 *
 * Retrun: 1 
 */
int comm_handle(char *argv[],char * envp[])
{

	if (strcmp(argv[0], "env") == 0)
	{
		env_vars(argv, envp);
	}
	else if (strcmp(argv[0], "clear") == 0)
	{
		my_system("clear");
	}
	else if (strcmp(argv[0], "exit") == 0)
	{
		exit_builtin(argv);
	}
	else if (strcmp(argv[0], "cd") == 0)
	{
		my_system(argv[0]);
	}
	else 
	{
		execcmd(argv);
	}
	return (1);

}
