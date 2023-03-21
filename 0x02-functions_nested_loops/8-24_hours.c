#include "main.h"

/**
 * jack_bauer - prints every minuite in the day
*/
void jack_bauer(void)
{
	int i = 0, j = 0, k = 0, l = 0;

	while (i < 3)
	{
		while (j < 10)
		{
			while (k < 6)
			{
				while (l < 10)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
