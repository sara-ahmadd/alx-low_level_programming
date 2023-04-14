#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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
		*str++ = a;
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

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	_memset((char *)arr, 0, (nmemb * sizeof(int)));
	return ((void *)arr);

}
