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

typedef struct dog dog_t;
char *allocate_string(char *str);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);

#endif
