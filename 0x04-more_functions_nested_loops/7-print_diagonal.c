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
		int i = 0, j = 0;

		while (i < n)
		{
			while (j < n)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			i++;
		}
			_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
