#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entery point
 *
 * Return: Always 0
 */

int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int length = strlen(letters);

	for (i = length - 1; i >= 0 ; i--)
	{
	putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
