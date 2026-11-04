#include <stdio.h>

/**
 * main - Demostrate the concept of while loops and counter.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	int total;

	count = 1;
	total = 0;

	while (count <= 5)
	{
		printf("%d\n", count);
		total = total + count;
		count = count + 1;
	}
	printf("Total: %d\n", total);
	return (0);
}
