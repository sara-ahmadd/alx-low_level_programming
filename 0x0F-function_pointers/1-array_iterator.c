#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - apply a function on each element in the array
 * @array: array to loop over
 * @size: size of the array
 * @action: pointer to the function to be applied on tha array elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
