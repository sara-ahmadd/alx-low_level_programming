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
	int i, j, len;
	int match = 0;

	len = strlen(s);

	for (i = 0; accept[i] != '\n'; i++)
	{

		for (j = 0; s[j] != '\n'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= len)
				{
					len = j;
					match = 1;
				}
			}
		}
	}
	if (match == 1)
	{
		return (&s[len]);
	}
	else
	{
		return (NULL);
	}
}
