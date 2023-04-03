#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * _strpbrk - fing first matching char from str2 in str1
 * @s: the string to be scanned
 * @accept: the string containing the matching chars
 * Return: pointer to the first matching char
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int len_s = strlen(s);
	unsigned int len_accept = strlen(accept);
	char *result;

	for (i = 0; i < len_s; i++)
	{
		bool match = false;

		for (j = 0; j < len_accept; j++)
		{
			if (accept[j] == s[i])
			{
				match = true;
				result = accept[j];
				break;
			}
		}
	}
	return (result);
}
