#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entery point for the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[ ] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int length = strlen(alphabet);

	for (i = 0; i < length ; i++)
	{

		putchar(alphabet[i]);
		putchar('\n');
	}
	return (0);
}
