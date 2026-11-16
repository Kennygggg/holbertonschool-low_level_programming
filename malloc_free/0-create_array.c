#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*
*
*
*
*
*
*
*
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	index = 0;

	while (size > index)
	{
		array[index] = c;
		index++;
	}

	return (array);
}
