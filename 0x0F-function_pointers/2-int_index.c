#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for integer
 * @array: array to search inside
 * @size: size of the array
 * @cmp: pointer to the function that searches
 * Return: index to the matched integer or -1 if no matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size > 0 && cmp)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) >  0)
			{
				return (i);
			}
		}
	}

	return (-1);

}
