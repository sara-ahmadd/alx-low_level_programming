#include "main.h"
#include <ctype.h>

/**
 * _islower - check if the letter is in lower case
 * @c: the character to check
 * Return: 1 (success) or 0 (failure)
*/
int _islower(int c)
{
	islower(c);
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
