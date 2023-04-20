#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * format_integer - prints integer
 * @separator: separate arguments
 * @args: list of arguments
 */
void format_integer( char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * format_charac - prints character
 * @separator: separate arguments
 * @args: list of arguments
 */
void format_charac(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}
/**
 * format_float - print float
 * @separator: separates arguments
 * @args: list of arguments
 */
void format_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}
/**
 * format_string - print string
 * @separator: separates argumnets
 * @args: list of arguments
 */
void format_string(char *separator, va_list args)
{
	char *str = va_arg(args, str);
	printf("%s%S", separator, str ? str : "(nil)");
}
/**
 * print_all - print args of any datatype
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list args;
	char *sep = "";;

	arguments_format args_format[] = {
		{"c", format_charac},
		{"i", format_integer},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		while (args_format[j].arg_type)
		{
			if (format[i] == args_format[j].arg_type[0])
			{
				args_format[j].f(sep, args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);

}
