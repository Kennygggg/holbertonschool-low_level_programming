#include "function_pointers.h"

/**
* array_iterator - This function cycles through the array and calls another
* function each pass.
*
* @array: this is the array from main.
*
* @size: value used as condition stopper.
*
* @action: function used.
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
