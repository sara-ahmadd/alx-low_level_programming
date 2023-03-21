#include "main.h"
/**
 * add - return the sum of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the sum
*/
int add(int a, int b)
{
	int sum = a + b;

	if (sum >= 10)
	{
		_putchar('0' + (sum / 10));
		_putchar('0' + (sum % 10));
		_putchar('\n');
		return (sum);
	}
	_putchar('0' + sum);
	_putchar('\n');
	return (sum);

}
