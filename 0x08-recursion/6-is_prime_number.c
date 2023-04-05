#include "main.h"
#include <stdio.h>
/**
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
