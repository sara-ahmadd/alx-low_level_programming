#include "main.h"
#include <string.h>

/**
 * *_strncpy - copy a string to another string
 * @dest: the first string
 * @src: the second string
 * @n: the number of copied characters
 * Return: the first string with the copied part
 */

char *_strncpy(char *dest, char *src, int n)
{
	dest = strncpy(dest, src, n);
	return (dest);
}
