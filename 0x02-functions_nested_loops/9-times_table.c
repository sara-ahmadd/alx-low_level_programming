#include "main.h"

/**
 * times_table - print times table
*/
void times_table(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
		{
			int result = (i * j);
			if (i == 0)
			{
				_putchar('0' + (result / 10));
				_putchar(',');
				_putchar(' ');
				j++;
			}
			_putchar('0' + (result / 10));
			_putchar('0' + (result % 10));
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
