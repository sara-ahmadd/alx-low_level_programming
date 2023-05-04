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
	int decimalVal = 1;
	int len = strlen(b), i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] == '1')
		{
			sum += decimalVal;
		}

		decimalVal *= 2;
	}
	return (sum);
}
