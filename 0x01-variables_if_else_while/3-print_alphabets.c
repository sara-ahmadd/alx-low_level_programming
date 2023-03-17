#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entery point to program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int length = strlen(alphabet);

	for (i = 0 ; i < length ; i++)
	{
		putchar(alphabet[i]);
		putchar(toupper(alphabet[i]));
	}
	putchar('\n');
	return (0);
}
