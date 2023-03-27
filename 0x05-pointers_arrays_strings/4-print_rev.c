#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - print the string in reversed pattern
 * @s: the input string
 */

void print_rev(char *s)
{
	int stringLen = strlen(s);
	int i;

	for (i = stringLen - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
