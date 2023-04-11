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
	if (size == 0)
	{
		return (NULL);
	}

	unsigned int i;
	char *string;

	string = (char *)malloc((size + 1) * sizeof(char));

	if (string == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			string[i] = c;
		}
		string[size] = '\0';
		return string;
	}
	free(string);
}
