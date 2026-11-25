#include "route.h"
#include <iso646.h>
#include <stdlib.h>

/**
*
*
*/

route_t *copy_route_with_attempt(const route_t *original)
{
	int length;
	route_t *copy;
	
	if (original == NULL || original->name == NULL)
	{
		return (NULL);
	}

	copy = malloc(sizeof(route_t));	
	if (copy == NULL)
	{
		return (NULL);
	}
	
	copy->attempts = original->attempts + 1;

	length = 0;

	while (original->name[length] != '\0')
	{
		length++;
	}

	copy->name = malloc((length + 1 ) * (sizeof(char)));

	if (copy->name == NULL)
	{
		free(copy);
		return (NULL);
	}

	length = 0;
	while (original->name[length] != '\0')
	{
		copy->name[length] = original->name[length];
		length++;
	}
	copy->name[length] = '\0';
	return (copy);
}
