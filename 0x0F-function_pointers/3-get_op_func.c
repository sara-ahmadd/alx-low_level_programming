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

	int i = 0;

	while (i < 5)
	{
		if (s && s[0] == ops[i].op[0] && !s[1])
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit (99);
	return (NULL);
}
