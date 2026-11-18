#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - this function returns a pointer to a 2d array
*
* @height: is a value used for rows
*
* @width: is a value used for columns.
*
* Return: 2d arrays.
*/

int **alloc_grid(int width, int height)
{
	int **array;
	int index;
	int col;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < height; index++)
	{
		array[index] = malloc(width * sizeof(int));

		if (array[index] == NULL)
		{
			while (index > 0)
			{
				index--;
				free(array[index]);
			}
			free(array);
			return (NULL);
		}
	}
	for (index = 0; index < height; index++)
	{
		col = 0;

		for (col = 0; col < width; col++)
		{
			array[index][col] = 0;
		}
	}
	return (array);
}
