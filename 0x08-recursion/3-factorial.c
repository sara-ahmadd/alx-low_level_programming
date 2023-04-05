#include "main.h"
#include <stdio.h>
/**
 * factorial - return factorial of a number
 * @n: the input number
 * Return: the factorial of a number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
