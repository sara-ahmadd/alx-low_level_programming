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
		int i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
