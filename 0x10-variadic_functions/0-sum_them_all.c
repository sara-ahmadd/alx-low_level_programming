#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_them_all - add all params
 * @n: number of arguments
 * Return: sum of added arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ap;
	int i;

	va_start (ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
