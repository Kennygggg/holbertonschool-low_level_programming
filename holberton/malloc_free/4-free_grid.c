#include "main.h"
#include <stdlib.h>

/**
* free_grid - this function free allocated memory if malloc fails.
*
* @grid: this is an array of pointers.
*
* @height: this is value of heigh.
*
* Return: Freed memory.
*/

void free_grid(int **grid, int height)
{
	int index;

	if (grid == NULL)
	{
		return;
	}

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
