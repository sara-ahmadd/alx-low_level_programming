#include "main.h"

/**
 * void times_table(void);
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
			int result = i * j;
			_putchar(result + '0');
			_putchar(',');
			_putchar('\t');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
