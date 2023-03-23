#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - print diagonal
 * @n: number of backspaces
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 1, j = 1;

		while (i <= n)
		{
			while (j <= i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			i++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
