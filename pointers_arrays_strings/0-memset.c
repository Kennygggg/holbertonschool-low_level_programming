#include "main.h"

/**
* _memset - this is a function that fills memory with a constant byte
*
* @n: a checked value to let us know how many slots to fill
*
* @b: what fill the memory with
*
* @s: array to use.
*
* Return: returns new memory.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}
	return (s);
}
