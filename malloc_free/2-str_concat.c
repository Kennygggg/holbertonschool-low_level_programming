#include "main.h"
#include <stdlib.h>

/**
* str_concat - a function that concatenates s2 to s1.
*
* @s1: string
*
* @s2: string
*
* Return: returns concatenated strings.
*/

char *str_concat(char *s1, char *s2)
{
	int index_s2 = 0, index_s1 = 0, sum_count = 0, index = 0;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[index_s1] != '\0')
	{
		index_s1++;
	}
	while (s2[index_s2] != '\0')
	{
		index_s2++;
	}
	array = malloc((index_s1 + index_s2 + 1) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	while (index < index_s1)
	{
		array[index] = s1[index];
		index++;
	}
	while (index < (index_s1 + index_s2))
	{
		array[index] = s2[sum_count];
		index++;
		sum_count++;
	}
	return (array);
}

