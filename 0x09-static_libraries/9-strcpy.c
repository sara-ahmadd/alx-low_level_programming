#include "main.h"
#include <string.h>

/**
 * *_strcpy - return dest with src string copied inside it
 * @dest: the string to reassign its value
 * @src: the string to copy inside dest
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
