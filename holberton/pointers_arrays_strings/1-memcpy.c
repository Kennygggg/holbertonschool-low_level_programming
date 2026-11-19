#include "main.h"

/**
* _memcpy - this function copies memory over dest array.
*
* @dest: This value is used to be copied over.
*
* @src: this is used to copy over dest.
*
* @n: this value is used to determine how many slots is used.
*
* Return: returns converted memory back to main.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
