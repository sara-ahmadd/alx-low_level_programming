#include "main.h"
#include <ctype.h>
/**
 * _isupper - check if the character is in upper case
 * @c: the character to be checked
 * Return: 1 if character is in upper case or 0 if not
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
