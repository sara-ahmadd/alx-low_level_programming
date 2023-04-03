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
	unsigned int i, j, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
			}

		}
	}
	return (k);

}
