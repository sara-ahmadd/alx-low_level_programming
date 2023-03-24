#include "main.h"
#include <stdio.h>
/**
 * print_triangle - draw a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = i; j < size - 1 ; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
