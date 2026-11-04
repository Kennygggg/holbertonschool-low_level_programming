#include <stdio.h>

/**
 * main - this is practice.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int number;

	number = '6';

	while (number <= '9')
	{
		putchar(number);
		number = number + 1;
	}
	putchar('\n');
	return (0);
}
