#include "main.h"
#include <stdlib.h>
/**
 * array_range - generates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: pointer to the array created
 */
int *array_range(int min, int max)
{
	int *array, len = 0, i;

	for (i = min; i < max; i++)
	{
		len++;
	}

	array = malloc(len * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	else if (min > max)
	{
		return (NULL);
	}
	else
	{
		for (i = min; i < max; i++)
		{
			array[i] = i;
		}
		array[i] = max;
		return (array);
	}
}
