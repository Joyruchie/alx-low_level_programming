#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize variable of type struct dog
 * @d: initialize Pointer to the dog struct
 * @name: Name of the dog
 * @age: dog age
 * @owner: Owner of the dog
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
