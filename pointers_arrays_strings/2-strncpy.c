#include "main.h"

/**
* _strncpy - this is a function that copies src into dest.
*
* @dest: This is used to copies over from src.
*
* @src: this is value used to be copy over to dest.
*
* @n: is the value used as a stopping parameter.
*
* Return: returns dest to ptr.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;

	while (index <= n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
