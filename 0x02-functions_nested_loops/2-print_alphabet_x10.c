#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_alphabet_x10 - print alphabet 10 times in lower case
  */

void print_alphabet_x10(void)
{
	int i = 0; 
	while (i < 10)
	{
		char letters[] = "abcdefghijklmnopqrstuvwxyz";
		int length = strlen(letters);
		int j = 0;		

       		 while (j < length)
       		 {
               		 _putchar(letters[j]);
        	        j++;
	       	 }
	        _putchar('\n');
		i++;
	}
}

