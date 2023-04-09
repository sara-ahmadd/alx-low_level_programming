#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main -entery point to the program
 * @argc: arguments count
 * @argv: array of the arguments
 * Return: 0 (success) or non-zero value (failure)
 */
int main(int argc, char **argv)
{
	int sum = 0, i, j, len;
	char *ptr;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			len = strlen(ptr);

			for (j = 0; j < strlen; j++)
			{

				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		return (printf("%d\n", 0), 0);
	}
}
