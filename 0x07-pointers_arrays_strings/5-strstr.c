#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strstr - matches a substring in a string
 * @haystack: the main string to be scanned
 * @needle: the substring to search for
 * Return: a pointer to the substring start in the main string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, len;
	len = strlen(haystack) - 1;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j] && j <= len)
			{
				return (&haystack[j]);
			}
		}
	}
	return (NULL);
}
