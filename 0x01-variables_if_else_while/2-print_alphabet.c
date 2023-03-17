#include <stdio.h>
#include <string.h>

/**
 * main - Entery point for the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (int i = 0; i < strlen(alphabet); i++)
	{
		putchar(alphabet[i]);
		putchar('\n');
	}
	return (0);
}
