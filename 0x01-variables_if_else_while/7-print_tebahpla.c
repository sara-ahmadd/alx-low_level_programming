#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * reverse - reverse the input string
 *
 * Return: reversed string
 */

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
	int j;
        char temp;

        for (i = length - 1 ,j = 0 ;j < (length/2) ; j-- , i++)
        {
                temp = letters[j];
                letters[j] = letters[i];
                letters[i] = temp;
        }

	for (i = 0 ; i < length ; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
