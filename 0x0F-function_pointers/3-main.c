#include "3-calc.h"
#include <stdio.h>
/**
 * main - entery point to the program
 * @argc: count of the arguments to the program
 * @argv: arguments array
 * Return: 0 (success) or non-zero value (failure)
 */
int main(int argc, char **argv)
{
	int (*op_f)(int, int), num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_f = get_op_func(argv[2]);
	if (!op_f)
	{
		printf("Error\n");
		exit(99);
	}
	if (!num2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_f(num1, num2));
	return (0);
}
