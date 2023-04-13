#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of characters to concatenate
 * Return: pointer to the resulted string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *str;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	str = (char *) malloc((len1 + n) * sizeof(char) + 1);
	if (n > = len2)
	{
		n = len2;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			str[i] = s1[i];
		}
		for (j = 0; j <= n; j++)
		{
			str[len1++] = s2[j];
		}
		return (str);
	}
	free(str);
}
