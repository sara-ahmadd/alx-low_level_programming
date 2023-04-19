#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - select appropriate operator to apropriate function
 * @s: the operator passed to the program
 * Return: pointer to the suitable function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < (sizeof(ops)/sizeof(ops[0])))
	{
		if (*s == ops[i][0])
		{
			return (ops[i][1]);
		}
		else
		{
			printf("Error\n");
			exit (99);
		}
		i++;
	}

}
