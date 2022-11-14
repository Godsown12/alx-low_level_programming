#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialises variables to sructure of dog
 * @d: Structure to pointer
 * @name: name of  dog.
 * @age: The age of  dog.
 * @owner: The owner of a dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
