#include "main.h"
#include <string.h>
/**
 * reverse_array - reverse an array
 * @a: the array to be reversed
 * @n: the number of elements in that array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i >= 0; i--)
	{
		if (i != 0)
		{
		_putchar(a[i] + '0');
		_putchar(',');
		_putchar(' ');
		}
		else
		{
			_putchar('\n');
		}
	}
}
