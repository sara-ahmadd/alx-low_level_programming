#include "main.h"
#include <stdio.h>
#include <string.h>
void print_alphabet(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int size = strlen(letters);
	int i = 0;

	while(i < size)
	{
		_putchar(letters[i]);
		i++;
	}
	_putchar('\n');
}
