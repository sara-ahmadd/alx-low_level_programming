#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - fing first matching char from str2 in str1
 * @s: the string to be scanned
 * @accept: the string containing the matching chars
 * Return: pointer to the first matching char
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	len = strlen(s) - 1;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i] && i <= len)
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
