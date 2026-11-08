#include "main.h"

/**
 * print_numbers - This function is made to print numbers when called
 *
 *
 * return:
 */

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		_putchar(number + '0');
	}
	_putchar('\n');
}
