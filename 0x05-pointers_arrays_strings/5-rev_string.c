#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse an input string
 * @s: the input string
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	int str[];

	for (i = len - 1; i >= 0; i--)
	{
		strcpy(str, s[i]);
	}
	strcpy(s, str);
}
