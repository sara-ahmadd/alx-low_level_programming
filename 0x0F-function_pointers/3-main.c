#include "3-calc.h"
#include <stdio.h>
/**
 * main - entery point to the program
 * @argc: count of the arguments to the program
 * @argv: arguments array
 * Return: 0 (success) or non-zero value (failure)
 */
int main(int argc, int* argv)
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	if (argc < 4)
	{
		printf("Error\n");
		exit (98);
	}
	get_op_func(argv[2])(num1, num2);
	
	if (num2 == 0 && argv[2] == '/' || argv[2] == '%')
	{
		printf("Error\n");
		exit (100);
	}
	return (0);
}
