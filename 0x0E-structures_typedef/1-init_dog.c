#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize avarible of type struct dog
 * @d: the struct name
 * @name: the dog name
 * @age: the dog age
 * @owner: the owner of the dog
 * Return: void
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
