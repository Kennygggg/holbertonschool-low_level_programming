#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Create a dog with copies of its name and owner
 *
 * @name: Dog's name
 *
 * @age: Dog's age
 *
 * @owner: Owner's name
 *
 * Return: Pointer to the new dog, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}

	my_dog->age = age;

	my_dog->name = allocate_string(name);

	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = allocate_string(owner);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	return (my_dog);
}
