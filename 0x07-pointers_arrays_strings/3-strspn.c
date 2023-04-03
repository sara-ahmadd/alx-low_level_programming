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

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(accept); j++)
		{
			if (accept[j] == s[i])
			{
				found_match = true;
				k++;
				break;
			}
			if (!found_match)
			{
				break;
			}
		}
	}
	return (k);
}
