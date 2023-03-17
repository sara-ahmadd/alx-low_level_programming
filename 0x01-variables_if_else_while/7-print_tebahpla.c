#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * reverse - reverse the input string
 *
 * Return: reversed string
 */
void reverse(char str[])
{
	int i,j;
	char temp;
	int len = strlen(str);

	for (i = len - 1 ,j = 0 ;j < (len/2) ; j-- , i++)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
	}
}

/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	char letters[] ="abcdefghijklmnopqrstuvwxyz";
	int i;
	int length = strlen(letters);
	reverse(letters);

	for (i = 0 ; i < length ; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
