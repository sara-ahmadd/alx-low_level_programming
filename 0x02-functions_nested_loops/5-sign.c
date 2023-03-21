#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to check its sign
 * Return: 1 (positive number) or 0 (zero) or -1 (negative number)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
