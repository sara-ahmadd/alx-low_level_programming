#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free memory allocated for struct dog
 * @d: pointer to the struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
