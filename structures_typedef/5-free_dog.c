#include "dog.h"
#include <stdlib.h>

/**
* free_dog - this function is to free allocated memory from the program
*
* @d: pointer to my_dog in the main.
*
*/


void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
