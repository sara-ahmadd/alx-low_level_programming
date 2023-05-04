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
	unsigned int sum = 0, i;
	unsigned int decimalVal = 1;
	unsigned int len = strlen(b);

	if (!b || *b > 1)
	{
		return (0);
	}

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			sum += decimalVal;
		}
		decimalVal *= 2;
	}
	return (sum);

}
