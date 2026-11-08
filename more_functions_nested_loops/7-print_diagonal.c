#include "main.h"

/**
 * print_diagonal - this function it to print diagonals using main's @n values
 *
 * @n: check the value of main
 *
 * return: printed '\' based on function's code.
 */

void print_diagonal(int n)
{
	int row;
	int column;

	if (n <= 0)
	{
		_putchar('\n');
	}
	
	for (row = 1; row <= n; row++)
	{
		column = 1;
		for (column = 1; column <= row; column++)
		{
			if (column != row)
			{
				_putchar(' ');
			}

			else
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
}

