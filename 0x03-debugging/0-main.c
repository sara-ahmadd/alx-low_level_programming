#include "main.h"
#include <stdio.h>
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	int i = 0;
	
	char result[] = positive_or_negative(i);
	printf("%s", result);
	
	return (0);
}
