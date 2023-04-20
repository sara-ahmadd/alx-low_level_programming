#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: separator to be put between ths strings
 * @n: number of string arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%s",  va_arg(args, char *));
		if (i < n - 1)
		{
			printf("%s", separator ? separator : "");
		}
	}
	printf("\n");
	va_end(args);

}
