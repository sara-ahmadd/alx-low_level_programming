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

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
