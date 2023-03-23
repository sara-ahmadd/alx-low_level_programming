#include "main.h"
#include <stdio.h>
/**
 * main - entery point
 * Return: 1 if succeed
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			_putchar(i + '0');
			_putchar(' ');
		}
	}
}
