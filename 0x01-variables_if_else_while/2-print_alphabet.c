#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entery point for the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[ ] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i;
	int length = strlen(alphabet);

	for (i = 0 ; i < length ; i++)
	{
	putchar(tolower(alphabet[i]));
	}
	return (0);
}
