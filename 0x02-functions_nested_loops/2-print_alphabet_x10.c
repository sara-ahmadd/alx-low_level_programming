#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_alphabet_x10 - print alphabet 10 times in lower case
  */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		char letters[] = "abcdefghijklmnopqrstuvwxyz";
		int length = strlen(letters);

		for (int j = 0; j < length; j++)
		{
			_putchar(letters[j]);
		}
		_putchar('\n');
	}
}

