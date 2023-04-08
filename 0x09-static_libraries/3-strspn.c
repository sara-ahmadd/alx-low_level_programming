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
	unsigned int k = 0, i, j;

	size_t len_1 = strlen(s);

	size_t len_2 = strlen(accept);

	for (i = 0; i < len_1; i++)
	{
		bool match = false;

		for (j = 0; j < len_2; j++)
		{
			if (accept[j] == s[i])
			{
				match = true;
				break;
			}
		}
		if (match == false)
		{
			break;
		}
		else
		{
			k++;
		}
	}

	return (k);
}
