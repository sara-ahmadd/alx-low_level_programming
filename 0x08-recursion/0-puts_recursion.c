#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string with \n at the end
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	s++;
	_puts_recursion(*s);
}
