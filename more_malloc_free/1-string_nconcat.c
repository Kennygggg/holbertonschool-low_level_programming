#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: string
 *
 * @s2: string
 *
 * @n: value
 *
 * Return: concatenated strings.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length = 0, lengths1 = 0, index = 0, count = 0;
	char *copied;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[lengths1] != '\0')
	{
		lengths1++;
	}
	while (s2[length] != '\0')
	{
		length++;
	}
	if (length > n)
	{
	length = n;
	}
	copied = malloc((lengths1 + length + 1) * sizeof(char));
	if (copied == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < lengths1; index++)
	{
		copied[index] = s1[index];
	}
	while (index < (lengths1 + length))
	{
		copied[index] = s2[count];
		count++;
		index++;
	}
	copied[index] = '\0';
	return (copied);
}
