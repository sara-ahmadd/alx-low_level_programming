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
	while (*s != c && *s != '\0')
	{
		s++;
	}
		if (*s == c || *s == c + 32 || *s == c - 32)
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
}
