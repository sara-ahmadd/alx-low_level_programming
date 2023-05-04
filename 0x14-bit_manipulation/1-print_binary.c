#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_binary - print binary representation of a number
 * @n: the input number
 */
void print_binary(unsigned long int n)
{
	int printed = 0;
	int size = sizeof(n) * 8;

	while (size)
	{
		if (n & 1L << --size)
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
