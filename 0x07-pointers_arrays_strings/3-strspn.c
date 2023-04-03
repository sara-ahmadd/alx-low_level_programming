#include "main.h"
#include <string.h>
#include <stdbool.h>

/**
 * _strspn - return length of chars matching between str1 and accept
 * @s: the string to search in
 * @accept: the segment to search for
 * Return: the length of the segment found
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0;
	bool found_match = false;

	for (i = 0; i < unsigned int  strlen(s); i++)
	{
		for (j = 0; j < unsigned int strlen(accept); j++)
		{
			if (accept[j] == s[i])
			{
				found_match = true;
				break;
			}
			if (!found_match)
			{
				break;
			}
			else
			{
				k++;
			}
		}
	}
	return (k);
}
