#include <stdio.h>
#include <stdlib.h>

/**
 * main - entery point to the program
 * @argc: the arguments count
 * @argv: array of the arguments
 * Return: 0 (success) or 1 (failure)
 */
int main(int argc, char **argv)
{
	int mul = 1, i;

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
