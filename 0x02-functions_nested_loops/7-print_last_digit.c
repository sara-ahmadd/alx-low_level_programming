#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: the last digit
*/
int print_last_digit(int n)
{
	int last = abs(n) % 10;
	
	if (n < 1 && n > 0)
	{
		int last = abs(n * 10) % 10;

		_putchar('0' + last);
		return (last);
	}
	_putchar('0' + last);
	return (last);
}
