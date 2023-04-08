#include "main.h"
#include <ctype.h>
/**
 * _isdigit - chech if the entered value is digit
 * @c: the input value to be checked
 * Return: 1 if it is a digit or 0 if it is not
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
