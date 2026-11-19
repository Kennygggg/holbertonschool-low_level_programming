#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - a function that allocates memory and exits 98 if fails
*
* @b: checked value from main
*
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	void *malloced;

	malloced = malloc(b);

	if (malloced == NULL)
	{
		exit(98);
	}
		return (malloced);
}
