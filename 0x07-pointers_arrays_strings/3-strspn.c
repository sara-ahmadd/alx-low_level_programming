#include "main.h"
#include <string.h>


/**
 * _strspn - return length of chars matching between str1 and accept
 * @s: the string to search in
 * @accept: the segment to search for
 * Return: the length of the segment found
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;

	k = strspn(s, accept);

	return (k);
}
