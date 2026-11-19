#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Information about a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

void init_dog(struct dog *d, char *name, float age, char *owner);

