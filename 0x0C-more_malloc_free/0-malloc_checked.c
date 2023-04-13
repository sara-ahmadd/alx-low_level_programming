#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: the size to be allocated
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *memo;

	memo = malloc(b);
	if (memo == NULL)
	{
		exit(98);
	}
	else
	{
		return (memo);
	}
}
