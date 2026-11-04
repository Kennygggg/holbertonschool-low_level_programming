#include <stdio.h>

/**
 *  main - Demostrating competence in while loops
 *  and displaying count and total.
 *
 *  Return: Always 0 (success)
 */

int main(void)
{
	int count;
	int total;

	count = 1;
	total = 0;

	while (count <= 9)
	{
		printf("%d\n", count);
		total = total + count;
		count = count + 2;
	}
	printf("Total: %d\n", total);
	return (0);
}
