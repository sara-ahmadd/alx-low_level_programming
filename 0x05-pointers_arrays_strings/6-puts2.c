#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - print even numbers
 * @str: the input string of numbers
 */

void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (i / 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
