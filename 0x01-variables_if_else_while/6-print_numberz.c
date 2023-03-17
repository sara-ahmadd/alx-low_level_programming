#include <stdio.h>
#include <ctype.h>

/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar( '0' + i );
	}
	putchar('\n');
	return (0);
}
