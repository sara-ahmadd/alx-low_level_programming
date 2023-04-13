#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: the array elements
 * @size: size of each element
 * Return: void pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	unsigned int i, len;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		len = nmemb * size;
		for (i = 0; i <= len; i++)
		{
			arr[i] = 0;
		}
		return ((void *)arr);
	}
	free(arr);
}
