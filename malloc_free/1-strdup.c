#include "main.h"
#include <stdlib.h>

/**
* _strdup - This is a function that returns a poiinter to a newly allocated
* 
* space.
*
* @str: this is a pointer to a string from main.
*
* Return: returns pointer.
*/

char *_strdup(char *str)
{
	char *array;
	int index;
	int count;

	if (str == NULL)
	{
		return (NULL);
	}

	count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	array = malloc(count * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	index = 0;

	while (str[index] != '\0')
	{
		array[index] = str[index];
		index++;
	}
	return (array);
}
