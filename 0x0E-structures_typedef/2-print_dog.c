#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print struct data
 * @d: the struct name
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
		{
			printf("Name: %s\n", d->name);
		}
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		if (d->age)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
	}
}
