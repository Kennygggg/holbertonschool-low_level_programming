#include "main.h"
#include <stdio.h>

/**
* print_array - this function prints number of elements from an array.
*
* @a: calls name of array.
*
* @n: number of slots to call.
*/

void print_array(int *a, int n)
{
	int index;
	int read;

	read = n;

	index = 0;

	for (index = 0; index < read; index++)
	{
		if (index > 0)
		{
			printf(", ");
		}
		printf("%d", a[index]);
	}
	printf("\n");

}
