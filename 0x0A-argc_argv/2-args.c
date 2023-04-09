#include <stdio.h>
/**
 * main - entery point of the program
 * @argc: the count of arguments
 * @argv: array of the arguments
 * Return: 0 (success) or 1 (failure)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
