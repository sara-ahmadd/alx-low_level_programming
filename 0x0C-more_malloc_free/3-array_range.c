#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - generates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: pointer to the array created
 */
int *array_range(int min, int max)
{
	int *array, i, len;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;
	array = malloc(len * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		array[i] = min++;
	}
	return (array);
}
