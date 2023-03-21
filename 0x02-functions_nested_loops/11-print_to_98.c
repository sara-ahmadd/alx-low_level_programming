#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - print natural numbers till 98
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		int i = n;

		while (i >= 98)
		{
			if (i >= 10)
			{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(' ');
			}
			else
			{
				_putchar(i + '0');
				_putchar(' ');
			}
			i--;
		}
		_putchar('\n');
	}
	if (n < 98)
	{
		int i = n;

		while (i <= 98)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(' ');
			}
			else
			{
				_putchar(i + '0');
				_putchar(' ');
			}
			i++;
		}
		_putchar('\n');
	}
}
