#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_binary - print binary representation of a number
 * @n: the input number
 */
void print_binary(unsigned long int n)
{
	int i, printed = 0;

	for (i = 7; i >= 0; i--)
	{
		if (n & 1L << i)
		{
			putchar('1');
			printed++;
		}
		else if (printed)
		{
			putchar('0');
		}
	}
	if (!printed)
	{
		putchar('0');
	}
}
