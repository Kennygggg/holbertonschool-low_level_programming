#include "main.h"
#include <stdio.h>

/**
 * main - will display numbers from 1 to 100 and checks if whether they're
 * multiples 3 and 5 or both!
 *
 * Fizz, Buzz or FizzBuzz will be displayed depending on their values.
 *
 * return: Always 0
 */

int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		FizzBuzz(number);
		putchar(' ');
	}
	return (0);
}
