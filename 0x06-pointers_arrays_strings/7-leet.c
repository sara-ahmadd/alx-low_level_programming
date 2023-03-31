#include "main.h"
/**
 * *leet - leet syntax
 * @s: the string
 * Return: the new string
 */
char *leet(char *s)
{
	int i, j;
	char leet[20] = "OL?EA??T";

	for (i = 0; s[i] != '\0'; i++)
	{
	
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (s[i] == leet[j] ||
				s[i] - 32 == leet[j])
			{
				s[i] = j + '0';
			}
		}
	}

	return (s);
}
