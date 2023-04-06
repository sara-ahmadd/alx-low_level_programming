#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * check_if_prime - chesk if number is prime
 * @n: the number to check
 * @value: the number to divide by
 * Return: 0 if not prime or 1 if prime
 */
int check_if_prime(int n, int value)
{
	if(n >= 2 && value >= n)
	{
		return (1);
	}
	else if (n <= 1 || n % value == 0)
	{
		return (0);
	}
	else
	{
		return (check_if_prime(n, value + 1));
	}
}


/**
 * is_prime_number - return if the number is prime or not
 * @n: the number
 * Return: o if not prime or 1 if prime
 */
int is_prime_number(int n)
{
	return (check_if_prime(n, 2));
}
