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

	while (s1[lengths1] != '\0')
	{
		lengths1++;
	}
	while (s2[length] != '\0')
	{
		length++;
	}
	if (n >= length)
	{
		copied = malloc((lengths1 + length + 1) * sizeof(char));
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
	copied = malloc((lengths1 + n + 1) * sizeof(char));
	for (index = 0; index < lengths1; index++)
	{
		copied[index] = s1[index];
	}
	for (length = 0; length < n; length++)
	{
		copied[index] = s2[length];
		index++;
	}
	copied[index] = '\0';
	return (copied);
}
