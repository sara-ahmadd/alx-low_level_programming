#include <stdio.h>
#include <stdlib.h>

/**
 * main -entery point to the program
 * @argc: arguments count
 * @argv: array of the arguments
 * Return: 0 (success) or non-zero value (failure)
 */
int main(int argc, char **argv)
{
	int sum = 0, i;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		return (printf("%d\n", 0), 0);
	}
}
