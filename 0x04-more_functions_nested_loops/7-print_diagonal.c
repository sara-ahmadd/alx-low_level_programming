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
		int i = 1;

		while (i <= n)
		{
			for (int j = 1; j <= i; j++)
			{
				_putchar(' ');
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
