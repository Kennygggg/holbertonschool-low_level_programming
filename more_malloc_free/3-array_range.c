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
	int total;

	if (min > max)
	{
		return (NULL);
	}

	total = max - (min);
	if (total < 0)
	{
		total = total * -1;
	}

	array = malloc((total + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index <= total; index++)
	{
		array[index] = index;
	}
	return (array);
}
