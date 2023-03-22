#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	int i;

	i = 0;

	char result[] =	positive_or_negative(i);

	if (result == "0 is zero")
	{
		return ("0 is zero");
	}

	return (0);
}
