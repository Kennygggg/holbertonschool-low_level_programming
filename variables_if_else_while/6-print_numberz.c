#include <stdio.h>

/**
 * main - display 0 - 9
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int number;

	number = '0';

	while (number <= '9')
	{
		putchar(number);
		number = number + 1;
	}
	putchar('\n');
	return (0);
}
