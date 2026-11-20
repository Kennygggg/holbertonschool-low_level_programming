#include <stdlib.h>

/**
 * allocate_string - Allocate and copy a string
 * @str: String to copy
 *
 * Return: Pointer to the copied string, or NULL on failure
 */
char *malloc_strcpy(char *str)
{
	size_t length;
	size_t index;
	char *buffer;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	buffer = malloc((length + 1) * sizeof(char));
	if (buffer == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < length; index++)
	{
		buffer[index] = str[index];
	}
	buffer[index] = '\0';

	return (buffer);
}
