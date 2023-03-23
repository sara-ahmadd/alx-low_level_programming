#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print num from 0 to 14 ten times
 */
void more_numbers(void)
{
	int i = 0, j = 0;

	while (i <= 10)
	{
		while (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
