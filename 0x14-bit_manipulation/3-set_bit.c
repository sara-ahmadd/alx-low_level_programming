#include "main.h"
#include <stdio.h>

/**
 * set_bit - set value of bit to 1 at an index
 * @n: number
 * @index: index
 *
 * Return: new value of n
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	n |= 1L << index;

	return (!!*n);
}
