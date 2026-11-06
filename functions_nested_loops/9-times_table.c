#include "main.h"

/**
 * times_table - Print times table.
 *
 * return: printed table
 */

void times_table(void)
{
	int row;
	int column;

	row = 1;
	column = 1;

	while (row <= 10)
	{  
		_putchar((0 * 0) + '0');
		_putchar(',');
		row = row + 1;
		_putchar('\n');
	}
	
	while (column <= 10)
	{  
		_putchar((1 * 1) + '0');
		_putchar(',');
		column = column + 1;
	}
	
}
