#include <stdio.h>
#include <stdlib.h>
#include "route.h"

int main(void)
{
	char name[] = "Slab";
	route_t original;
	route_t *copy;

	original.name = name;
	original.attempts = 3;

	copy = copy_route_with_attempt(&original);
	if (copy == NULL)
	{
		return (1);
	}

	name[0] = 'F';

	printf("Original: %s, %d attempts\n", original.name, original.attempts);
	printf("Copy: %s, %d attempts\n", copy->name, copy->attempts);

	free(copy->name);
	free(copy);
	return (0);
}
