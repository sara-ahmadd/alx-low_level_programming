#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - searches for a char in a string
 * @s: the string to searh in
 * @c: the char to search for
 * Return: a pointer to the found char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
