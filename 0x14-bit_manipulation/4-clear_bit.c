#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set a bit value to 0
 * @n: the input number
 * @index: the index required
 *
 * Return: the new value of n
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}
	*n & 1L << index && *n ^= 1L << index;

	return (1);
}
