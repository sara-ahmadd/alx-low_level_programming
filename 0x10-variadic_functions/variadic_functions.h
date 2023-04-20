#ifndef VAR_FUNC
#define VAR_FUNC
#include <stdarg.h>

/**
 * struct arguments - arguments
 * @arg_type: type of argument
 * @f: function for specified datatype
 */
typedef struct arguments
{
	char *arg_type;
	void (*f)(char *, va_list);
} arguments_format;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
