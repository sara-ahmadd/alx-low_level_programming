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
	int size;
	char *copy;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str);

	copy = (char *)malloc(size * sizeof(char) + 1);

	if (copy == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			copy[i] = str[i];
		}
		copy[i] = '\0';
		return (copy);

	}
	free(copy);

}
