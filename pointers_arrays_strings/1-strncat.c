#include "main.h"

/**
 * _strncat - this function appends src to to dest, with out ' '
 *
 * @dest: checks string from main
 *
 * @src: checks string from main
 *
 * @n: checks int value which represents array slot to use.
 *
 * Return: returns dest to assign to ptr.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index;
	int temp;
	int slot;

	index = 0;

	while (dest[index] != '\0')
	{
		index++;
	}

	temp = 0;
	slot = 1;

	while (src[temp] != '\0' && slot <= n)
	{
		dest[index] = src[temp];
		index++;
		temp++;
		slot++;
	}
	return (dest);
}
