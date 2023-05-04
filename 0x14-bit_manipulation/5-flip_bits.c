#include "main.h"
#include <stdio.h>

/**
 * flip_bits - convert a number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		if (diff & 1uL)
		{
			count++;
		}
		diff = diff >> 1;
	}
	return (count);
}
