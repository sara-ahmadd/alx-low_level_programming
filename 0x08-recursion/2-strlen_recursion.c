#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - print length os a string
 * @s: the string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
