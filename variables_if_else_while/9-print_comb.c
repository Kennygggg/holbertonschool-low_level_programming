#include <stdio.h>

/**
 * main - Displaying all single numbers,
 * each number is paid with comma and space.
 *
 * Return: Always (0)
 */

int main(void)
{
	int number;

	number = '0';

	while (number <= '9')
	{
		putchar(number);
		putchar(',');
		putchar(' ');
		number = number + 1;
	}
	putchar('\n');
	return (0);
}
