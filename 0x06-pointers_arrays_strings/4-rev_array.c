#include "main.h"
#include <string.h>
/**
 * reverse_array - reverse an array
 * @a: the array to be reversed
 * @n: the number of elements in that array
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{	
			temp = a[i];
			a[i] = a[j];
			a[j--] = temp;
		
	}
}
