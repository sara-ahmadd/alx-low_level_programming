#include "main.h"
#include <stdio.h>
/**
 * is_prime_recursion - return if the number is prime or not
 * @n: the number
 * Return: o if not prime or 1 if prime
 */
int is_prime_number(int n)
{
	if (n > 0)
	{
		return (n / is_prime_number(n - 1));
	}
	else if (n == 1)
	{
		return (n);
	}
}
