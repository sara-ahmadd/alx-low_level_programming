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
	int n;
	int i;
	
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = (len / 2)- 1;
	}
	for (i = n + 1; i <= len - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
