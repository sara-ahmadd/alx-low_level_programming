#include "main.h"
#include <stdio.h>
void print_alphabet(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int size = sizeof(letters) / sizeof(letters[0]);
	int i = 0
	while(i < size)
	{
		_putchar(letters[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
