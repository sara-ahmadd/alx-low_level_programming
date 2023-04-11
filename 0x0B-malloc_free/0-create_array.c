#include "main.h"
#include <stdlib.h>
/**
 * create_array - creat a string of single char
 * @size: the length of the string
 * @c: the filling char
 * Return: pointer to the string
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *string;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	string = (char *)malloc((size + 1) * sizeof(char));

	if (string == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			string[i] = c;
			i++;
		}
		string[size] = '\0';
		return string;
	}
	free(string);
}
