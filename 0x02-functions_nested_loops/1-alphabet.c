#include "main.h"
#include <ctype.h>
#include <stdio.h>

void print_alphabet(char c)
{
	char letter = tolower(c);

	_putchar(letter);
}

/**
 * main - entery point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	print_alphabet('A');
	print_alphabet('B');
	print_alphabet('C');
	print_alphabet('D');
	print_alphabet('E');
	print_alphabet('F');
	print_alphabet('G');
	print_alphabet('H');
	print_alphabet('I');
	print_alphabet('J');
	print_alphabet('K');
	print_alphabet('L');
	print_alphabet('M');
	print_alphabet('N');
	print_alphabet('o');
	print_alphabet('P');
	print_alphabet('Q');
	print_alphabet('R');
	print_alphabet('S');
	print_alphabet('T');
	print_alphabet('U');
	print_alphabet('V');
	print_alphabet('W');
	print_alphabet('X');
	print_alphabet('Y');
	print_alphabet('Z');
	_putchar('\n');
	return (0);
}
