#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * Return: two concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int len1;
	int len2;
	int i, j;

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
	con = malloc((len1 + len2) * sizeof(char) + 1);
	if (con == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			con[i] = s1[i];
		}
		for (i = 0, j = len1; i < len2; i++, j++)
		{
			con[j] = s2[i];
		}
		con[len1 + len2] = '\0';
		return (con);
	}
	free(con);
}
