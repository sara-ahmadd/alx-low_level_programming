#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the resulted string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str = malloc(strlen(s1) + n  + 2);
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		str = strncat(s1, s2, n);
		return (str);
	}
}
