#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_alphabet_x10 - print alphabet 10 times in lower case
  */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		char letters[] = "abcdefghijklmnopqrstuvwxyz";
		int length = strlen(letters);
		

       		 while (j < length)
       		 {
               		 _putchar(letters[j]);
        	        j++;
	       	 }
	        _putchar('\n');
	}
}

