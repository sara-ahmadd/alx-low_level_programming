#include <stdio.h>

/**
 * main - entery point
 *
 * Return: always 0
 */

int main(void)
{
	int i, k;

	for (i = 0 ; i < 10 ; i++)
	{
			putchar('0' + i);
			if (i != 9)
			{
			putchar(',');
			putchar('\t');
			}
	}
	return (0);

}
