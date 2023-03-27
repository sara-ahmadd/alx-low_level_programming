#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of the given string
 * @str: the input string
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int n = len / 2;
	int i;

	for (i = n; i <= len - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
