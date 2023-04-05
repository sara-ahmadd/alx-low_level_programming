#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - print x to the power of y
 * @x: the main number
 * @y: the power
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
