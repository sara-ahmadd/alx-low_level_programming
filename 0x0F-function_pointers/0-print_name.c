#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: the name of the person
 * @f: pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
}
