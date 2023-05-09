#include "main.h"

/**
 * main - the entery point to the program
 * @argc: number of arguments entering to the program
 * @argv: array containing the arguments
 *
 * Return: zero if success or non-zero value on failure
 */

int main(int argc, char **argv)
{
	char *prompt = "(Myshell) :)", *lineptr = NULL;
	ssize_t n, chars_read, tokens_count = 0, i, j;
	char *line_cp = NULL, *token;	

	const char *delims;
	
	delims = " ";
	n = 0;
	
	while (1)
	{
	printf("%s ", prompt);
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
	token = strtok(line_cp, delims);
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

		for(i = 0; i < tokens_count; i++)
		{
			argv[i] != NULL && printf("%s\n", argv[i]);
			free(argv[i]);
		}
		free(argv);
		free(line_cp);
	}
	free(lineptr);	
	return (0);
}
