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

			if (j == 0)
			{
				_putchar(result + '0');
			}

			if (result < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');

			}

			if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));

			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
