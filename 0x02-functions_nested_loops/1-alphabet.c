#include "main.h"
#include <ctype.h>

/**
 * main - entery point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int size_alpha = sizeof(alpha);

	for(int i = 0; i < size_alpha; i++)
	{	
		int letter = tolower(alpha[i]);
		_putchar(letter);
	}
	_putchar('\n');
	return (0);
}
