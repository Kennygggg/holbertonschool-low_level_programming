#include "main.h"
#include <stdlib.h>

/**
* _calloc - function that allocates memory for an array, using malloc.
*
* @nmemb: value of elements.
*
* @size: value of sizeof.
*
* Return: initialised array.
*
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *array;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < (nmemb * size); index++)
	{
		array[index] = 0;
	}
	return (array);
}
