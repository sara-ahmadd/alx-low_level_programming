#include <stdio.h>
/**
 * main - entery point to the program
 * @argc: the arguments count
 * @argv: the array of arguments
 * Return: 0 (success) or 1 (failure)
 */
int main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("%s", argv[0]);
	}
	else
	{
		argv[0] == argv[1];
		printf("%s", argv[0]);
	}
	return (0);
}
