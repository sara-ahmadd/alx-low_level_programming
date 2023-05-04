#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_unit - convert binary number to unsigned int
 * @b: the input number
 *
 * Return: the converted number or zero
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		sum = sum * 2 + (*b++ - '0');
	}
	return (sum);
}
