#include "main.h"
#include <stdio.h>
/**
 * print_array - print e,ements of an array
 * @a: the array
 * @n: the length of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		printf("%d, ", a[i]);
	}
	printf("\n");
}
