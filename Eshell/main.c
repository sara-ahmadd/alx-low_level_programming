#include "main.h"

/**
 * start_shell - starting msg to my shell
 */

void start_shell(void)
{
	char *prompt = "(Myshell:)";

	printf("%s> %s #", prompt, getcwd(currentDirectory, 1024));
}

/**
 * comm_handle - handle commands
 * @argv: list of arguments to program
 *
 * Retrun: 1 on success 
 */
int comm_handle(char *argv[])
{
	char comm[MAX_CHAR];

	strcpy(comm, argv[0]);
	if (strcmp(comm, "history") == 0)
	{	
		getHistory();
	}
	else if (strcmp(comm, "env") == 0)
	{
		printf("%s\n", env_vars(argv));
	}
	else if (strcmp(comm, "exit") == 0)
	{
		return (-1);
	}
	else if (strcmp(comm, "clear") == 0)
	{
		system("clear");
	}
	else if (strcmp(comm, "cd") == 0)
	{
		change_dir(argv);
	}
	else 
	{
		system(comm);
	}
	return (1);
}
/**
 * change_dir - change directory
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int change_dir(char *argv[])
{
	if (argv[1] == NULL)
	{
		chdir(getenv("HOME"));
		return (1);
	}
	else
	{
		if (chdir(argv[1]) == -1)
		{
			printf("%s: no such directory is found.\n", argv[1]);
			return (-1);
		}
	}
	return (0);
}
/**
 * main - the entery point to the program
 * @argc: number of arguments entering to the program
 * @argv: array containing the arguments
 *
 * Return: zero if success or non-zero value on failure
 */

int main(int argc, char **argv)
{
	char *lineptr = NULL;
	ssize_t chars_read, tokens_count = 0, i, j;
	size_t n;
	char *line_cp = NULL, *token;
	const char *delims;
	pid_t proc;

	currentDirectory = (char *) calloc(1024, sizeof(char));

	(void)argc;

	delims = " \n";
	n = 0;
	while (1)
	{
	init();
	chars_read = getline(&lineptr, &n, stdin);
	if (chars_read == -1)
	{
		printf("Exit Myshell\n");
		free(lineptr);
		return (-1);
	}
	line_cp = malloc(sizeof(char) * chars_read);
	if (line_cp == NULL)
	{
		perror("can't allocate memory");
		free(lineptr);
		return (-1);
	}
	strcpy(line_cp, lineptr);
	/*calc number of tokens*/
	token = strtok(lineptr, delims);
	while (token != NULL)
	{
		tokens_count++;
		token = strtok(NULL, delims);
	}
		tokens_count++;
	
	argv = malloc(sizeof(char *) * tokens_count);
	if (argv == NULL)
	{
		perror("Error in memory allocation");
		free(line_cp);
		free(lineptr);
		return (-1);
	}
	token = strtok(line_cp, delims);
		for (i = 0; token != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * strlen(token));
			if (argv[i] == NULL)
			{
				perror("Error in memory allocation");
				for (j = 0; j < i; j++)
				{
					free(argv[j]);
				}
				free(argv);
				free(line_cp);
				free(lineptr);
				return (-1);
			}
			strcpy(argv[i], token);
			token = strtok(NULL, delims);
		}
		proc = fork();
		if (proc == -1)
		{
			perror("Error:");
			exit(EXIT_FAILURE);
		}
		if (proc == 0)
		{
			/*execute the command*/
			execcmd(argv);
			free(line_cp);
			exit(EXIT_FAILURE);
		}
		else
		{
			wait(NULL);
			continue;
		}
	}
	free(lineptr);	
	return (0);
}