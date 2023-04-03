#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copy a string to another string
 * @dest: the array to which another string copied
 * @src: the source string
 * @n: the amount of bytes to be copied
 * Return: pointer to the destination array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
