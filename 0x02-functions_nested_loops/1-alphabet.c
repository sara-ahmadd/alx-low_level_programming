#include "main.h"
#include <ctype.h>
#include <stdio.h>

void print_alphabet(char alpha[], int size)
{
	for(int i = 0; i < size; i++)
        {
                int letter = tolower(alpha[i]);
                _putchar(letter);
        }
}

/**
 * main - entery point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int size_alpha = sizeof(alpha) / sizeof(alpha[0]);
	
	print_alphabet(alpha, size_alpha);
	
	_putchar('\n');
	return (0);
}
