#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - this function creates an x amount array with H
* initialised in all the locations.
*
* @size: This value gives the size of the array.
*
* @c: this value initialises all the slots.
*
* Return: returns array with initialised c.
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

	if (array == NULL)
	{
		return (NULL);
	}

	while (size > index)
	{
		array[index] = c;
		index++;
	}

	return (array);
}
