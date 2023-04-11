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
	int size = strlen(str);
	char *copy;

	copy = (char *)malloc(size * sizeof(char));
	unsigned int i;

	i = 0;
	if (str == NULL || copy == NULL)
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
	free(copy);
}
