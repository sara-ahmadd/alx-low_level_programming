#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonal numbers
 * @a: pointer to 2d array
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	unsigned int i, j, sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			sum = a[i][j] + a[i + 1][j + 1];
		}
		_putchar(sum);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
