#include "main.h"
#include <stdlib.h>
/**
 * *_memset - fill a block of memory with a specific value
 * @s: the pointer to the starting address
 * @b: the value
 * @n: the amount of bytes to be filled
 * Return: a pointer to the filled block of memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	void *memset(s, b, n);
	return (s);
}
