#include "dog.h"
#include <stdio.h>
/**
 * init_dog - entry
 * @d: type
 * @name: type
 * @age: type
 * @owner: type
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
