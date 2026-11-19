#include "main.h"

/**
* _strcat - this function appends src to dest.
*
* @dest: value in which src is to appends to.
*
* @src: value in which appends to dest.
*
* Return: returns dest to ptr as new value.
*/

char *_strcat(char *dest, char *src)
{
	int index;
	int temp;

	index = 0;

	while (dest[index] != '\0')
	{
		index++;
	}

	temp = 0;

	while (src[temp] != '\0')
	{
		dest[index] = src[temp];
		index++;
		temp++;
	}
	return (dest);
}

