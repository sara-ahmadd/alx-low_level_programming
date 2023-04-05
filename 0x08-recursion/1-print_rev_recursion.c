#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - print reversed string
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
