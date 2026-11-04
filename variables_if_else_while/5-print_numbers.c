#include <stdio.h>

/**
 * main - displaying numbers from 0 to 9
 *
 * Return:  Always 0 (success)
 */

int main(void)
{
	int number;

	number = 0;

	while (number <= 9)
	{
		printf("%d", number);
		number = number + 1;
	}
	return (0);
}
