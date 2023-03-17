#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - entery point
 *
 * Return: Always 0
 */
int main(void)
{
	char decimals[] = "0123456789abcdef";
	int i;
	int len = strlen(decimals);

	for (i = 0 ; i < len ; i++)
	{
		putchar(decimals[i]);
	}
	putchar('\n');
	return (0);
}
