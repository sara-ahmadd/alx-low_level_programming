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

		while (n >= 98)
		{
			_putchar('0' + i);
			_putchar(' ');
			i--;
		}
		_putchar('\n');
	}
	if (n < 98)
	{
		int i = n;

		while (n <= 98)
		{
			_putchar('0' + i);
			_putchar(' ');
			i++;
		}
		_putchar('\n');
	}
}
