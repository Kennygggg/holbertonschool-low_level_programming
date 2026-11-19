#include "main.h"
#include <stdlib.h>

/**
* array_range - a function that creates an array of integars.
*
* @min: min value.
*
* @max: max value.
*
* Return: array.
*/

int *array_range(int min, int max)
{
	int *array;
	int index;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(((max - (min) * -1) + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index <= max; index++)
	{
		array[index] = index;
	}
	return (array);
}
