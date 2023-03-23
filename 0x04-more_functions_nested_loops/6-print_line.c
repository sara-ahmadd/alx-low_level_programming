#include "main.h"
#include <stdio.h>
/**
 * print_line - draw a straight line
 * @n: the number of (_)
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
