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
	char *prompt = "(Eshell) :)", *lineptr;
	ssize_t n, chars_read, tokens_count = 0, i;
	char *line_cp = NULL, *token;	

	const char *delims;
	
	delims = " \n";
	n = 0;
	
	(void)argc;
	(void)argv;

	while (1)
	{
		printf("%s ", prompt);
		chars_read = getline(&lineptr, &n, stdin);
		if (chars_read == -1)
		{
			printf("Exit eshell\n");
			return (-1);
		}
		line_cp = malloc(sizeof(char) * chars_read);
		if (line_cp == NULL)
		{
			perror("can't allocate memory");
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
		
		argv = malloc(sizeof(token) * tokens_count);
		token = strtok(line_cp, delims);
		for (i = 0; token != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * strlen(token));
			strcpy(argv[i], token);
			token = strtok(NULL, delims);
		}
		argv[i] = '\0';


		printf("%s\n", lineptr);
		free(argv);
		free(line_cp);
		free(lineptr);
	}
	return (0);
}
