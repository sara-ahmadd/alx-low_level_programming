#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - reurn square root of a number
 * @n: the number input
 * Return: square root of that number
 */
/**
 * square - check if the (value) is square root of (num)
 * @num: the number to check its square root
 * @value: the square root
 * Return: the square root or -1 if no square root
 */
int square(int num, int value)
{
	if (value * value == num)
	{
		return (value);
	}
	else if (value * value < num)
	{
		return (square(num, value + 1));
	}
	else
	{
		return (-1);
	}
}
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
