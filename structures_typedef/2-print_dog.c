#include "dog.h"
#include <stdio.h>

/**
* print_dog - This functions prints the parameter from main.
*
* @d: pointer to an address.
*
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n"
	"Age: %.6f\n"
	"Owner: %s\n", d->name, d->age, d->owner);
}

