#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy the input string and return a pointer to the new copy
 * @str: the string to be copied
 * Return: pointer to the new copy of that string
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		int size;
		char *copy;
		unsigned int i;

		size = strlen(str);
		copy = (char *)malloc((size + 1) * sizeof(char)):
		if (copy == NULL)
		{
			return (NULL);
		}
		else
		{
			while (str[i] != '\0')
			{
				copy[i] = str[i];
				i++;
			}
			copy[i] = '\0';
			return (copy);
		}
	}
	free(copy);
}
