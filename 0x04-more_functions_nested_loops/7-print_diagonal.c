#include "main.h"
#include <stdio.h>
/**
 * void print_diagonal(int n)
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
