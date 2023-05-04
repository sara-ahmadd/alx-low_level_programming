#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_binary - print binary representation of a number
 * @n: the input number
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8;
	char mask = 0b10000000, result;

	while (size)
	{
		result = n & mask ? '1' : '0';
		mask >>= 1;
		_putchar(result);
		size--;
	}
	if (!result)
	{
		_putchar('0');
	}
}
