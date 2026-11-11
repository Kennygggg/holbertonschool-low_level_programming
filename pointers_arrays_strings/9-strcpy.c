#include "main.h"

/**
* _strcpy - this functions takes source from main and copies it into
* it a new destination provided from main.
*
* @dest: the destination to store copied source
*
* @src: the source to copy into the new destination.
*
* Return: return the newly copied destination to return to main.
*/

char *_strcpy(char *dest, char *src)
{
	int length;

	length = 0;

	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}
	dest[length] = src[length];
	return (dest);
}

