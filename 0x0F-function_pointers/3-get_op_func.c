#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - select appropriate operator to apropriate function
 * @s: the operator passed to the program
 * @a: first int
 * @b: second int
 * Return: pointer to the suitable function
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};

	int i = 0, len;

	len = sizeof(ops) / sizeof(ops[0]);

	while (i < len)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
		else
		{
			printf("Error\n");
			exit (99);
		}
		i++;
	}
	return (0);
}
