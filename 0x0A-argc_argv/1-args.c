#include <stdio.h>

/**
 * main - entery point to the program
 * @argc: the arguments count
 * @argv: array of the arguments passed to the function
 * Return: 0 (success) or 1 (failure)
 */

int main(int argc, _attribute_((unused))char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
