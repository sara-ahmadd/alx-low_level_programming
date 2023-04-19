#include "3-calc.h"
#include <stdio.h>
/**
 * main - entery point to the program
 * @argc: count of the arguments to the program
 * @argv: arguments array
 * Return: 0 (success) or non-zero value (failure)
 */
int main(int argc, char** argv)
{
	int num2;
	if (argc < 4)
	{
		printf("Error\n");
		exit (98);
	}
	
	num2 = atoi(argv[3]);

	if (num2 == 0 && *argv[2] == '/')
	{
		printf("Error\n");
		exit (100);
	}
	if (num2 == 0 && *argv[2] == '%')
	{
		printf("Error\n");
		exit (100);
	}
	return (0);
}
