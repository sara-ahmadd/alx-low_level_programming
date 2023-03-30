#include "main.h"
#include <string.h>
/**
 * *_strcat - append src string to dist string
 * @dest: the first string
 * @src: the second string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	return (dest);

}
