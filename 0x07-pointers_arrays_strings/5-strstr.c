#include "main.h"
#include <string.h>

/**
 * _strstr - matches a substring in a string
 * @haystack: the main string to be scanned
 * @needle: the substring to search for
 * Return: a pointer to the substring start in the main string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (&haystack[j]);
			}
		}
	}
	return (NULL);
}
