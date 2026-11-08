#include "main.h"

/**
 * print_triangle - function is to check main's values and print a
 * triangle with '#'
 *
 * @size: check value to determine whether its ' ' or '#'
 *
 * Return:
 */

void print_triangle(int size)
{
	int row;
	int column;
	int starting;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 1; row <= size; row++)
	{
		column = 1;

		for (column = 1; column <= size; column++)
		{
			starting = row + column;

			if (starting > size)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
