#include "main.h"

/**
 * print_square - this function is to print # into square based
 * on the value from main.
 *
 * return: printed squares use (#)
 */

void print_square(int size)
{
	int row;

	int column;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 1; row <= size; row++)
	{
		column = 1;
		for (column = 1; column <= size; column++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
