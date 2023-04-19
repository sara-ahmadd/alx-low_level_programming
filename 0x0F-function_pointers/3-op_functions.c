#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - add integers
 * @a:first  integer
 * @b: second integer
 * Return: sum of a, b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract 2 integers
 * @a: first int
 * @b: second int
 * Return: result of (a - b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply 2 integers
 * @a: first integer
 * @b: second integer
 * Return: result of (a * b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide 2 integers
 * @a: first int
 * @b: second int
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - get remainder of a / b
 * @a: first int
 * @b: second int
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
