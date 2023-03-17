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
		for (k = 0 ; k < 10 ; k++)
		{
			putchar('0' + i);
			putchar('0' + k);
			putchar(',');
			putchar('\t');
		}
	}
	return (0);

}
