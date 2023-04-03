#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonal numbers
 * @a: pointer to 2d array
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, sum_1 = 0, sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_1 += a[i];
		sum_2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ",sum_1);
	printf("%d\n", sum_2);
}
