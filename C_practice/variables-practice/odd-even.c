#include <stdio.h>

/**
 * main - Displaying only odd numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;

	count = 1;

	while (count <= 6)
	{
		if (count % 2 == 0)
		{
			printf("%d Even\n", count);
		}
		else
		{
			printf("%d Odd\n", count);
		}
		count = count + 1;
	}
	return (0);
}
