#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - print natural numbers till 98
*/
void print_to_98(int n)
{
	if ( n == 98)
	{
		printf("%d\n", n);
	}
	if (n > 98)
	{
		int i = n;

		while (i >= 98)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			printf("%d, ", i);
			i--;
		}
		
	}
	if (n < 98)
	{
		int i = n;

		while (i <= 98)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			printf("%d, ", i);
			i++;
		}
	}
}
