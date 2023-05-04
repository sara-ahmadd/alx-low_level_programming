#include "main.h"
#include <stdio.h>

/**
 * get_bit - get value of bit
 * @n: the number input
 * @index: the index
 * Return: the value of curent bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
