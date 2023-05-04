#include "main.h"
#include <stdio.h>

/**
 * get_bit - get value of bit
 * @n: the number input
 * @index: the index
 * Return: the value of curent bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	char binary[220];
	int len, i;
	char temp;

	do 
	{
		if (n % 2 == 0)
		{
			binary[len] = '0';

		}
		else
		{
			binary[len] = '1';
		}
		n =/ 2;
		len++;
	} while (n != 0)
	
	binary[len] = '\0';
	for (i = 0; i < (len / 2); i++)
	{
		temp = binary[i];
		binary[i] = binary[len - i -1];
		binary[len - i -1] = temp;
	}
	
	for (i = 0; binary[i] != '\0'; i++)
	{
		if (i == index)
		{
			return (binary[i]);
		}
	}
	return (-1);
}
