#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check if the character is alphabet or not
 * @c: the character to check
 * Return: 1 (success) or 0 (failure)
*/
int _isalpha(int c)
{
	isalpha(c);
	if(isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
