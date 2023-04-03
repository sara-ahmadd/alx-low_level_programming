#include "main.h"
#include <stdio.h>

/**
 * *_memset - fill a block of memory with a specific value
 * @s: the pointer to the starting address
 * @b: the value
 * @n: the amount of bytes to be filled
 * Return: a pointer to the filled block of memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *mem = memset(s, b, n);
	return (mem);
}
