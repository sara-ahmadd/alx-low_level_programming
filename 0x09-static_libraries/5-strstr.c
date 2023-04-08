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
	int i;

	for (i = 0; i < (strlen(haystack) - strlen(needle)); i++)
	{
		if (strncmp(&haystack[i], &needle[0], strlen(needle) - 1) == 0)
		{
			return ((char *)haystack + i);
		}
	}
	return (NULL);
}
