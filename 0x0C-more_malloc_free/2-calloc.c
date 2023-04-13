#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * _memset - fill string with a char
 * @str: the pointer
 * @a: the char
 * @n: the number of bytes
 * Return: void pointer
 */
void *_memset(char *str, char a, unsigned int n)
{
	char *s = str;

	while (n--)
	{
		*s++ = a;
	}
	return (s);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: the array elements
 * @size: size of each element
 * Return: void pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i, len;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		_memset(arr, 0, (nmemb * sizeof(int)));
		return (arr);
	}
	free(arr);
}
