#include <stdio.h>
#include <string.h>
#include <ctype>

/**
 * main - Entery point to the program
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int length = strlen(letters);

	for (i = 0 ; i < length ; i++)
	{
		if (letters[i] != 'e' && letters[i] != 'q')
		{
		putchar(tolower(letters[i]));
		}
	}
	return (0);
}
