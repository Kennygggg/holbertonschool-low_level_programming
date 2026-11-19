#include "dog.h"
#include <stdlib.h>

/**
* init_dog - this function initialises variables from main.
*
* @d: address
*
* @name: dog's name
*
* @age: dog's age
*
* @owner: owner's name
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->age = age;
	d->name = name;
	d->owner = owner;
}
