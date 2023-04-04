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
	unsigned int i, j, len, len_2, flag;

	len = strlen(haystack);
	len_2 = strlen(needle);

	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		if (haystack[i] == needle[0])
		{
			flag = 0;

			for (j = 0; j < len_2; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				return (&haystack[i]);
			}
		}
		else
		{
			return (NULL);
		}
	}
}
