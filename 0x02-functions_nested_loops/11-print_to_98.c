#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - print natural numbers till 98
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		for (int i = n; n >= 98; i--)
		{
			_putchar('0' + i);
			_putchar(' ');
		}
		_putchar('\n');
	}
	if (n < 98)
	{
		for (int i = n; n <= 98; i++)
		{
			_putchar('0' + i);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
