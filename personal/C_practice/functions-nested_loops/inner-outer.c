#include "main.h"

/**
 * main - This file is just for me to do my testing and 
 * learning on functions and nested loops
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int row;
	int column;

	row = 1;

	while (row <= 2)
	{
		column = 1;

		while (column <= 3)
		{
			_putchar('*');
			column = column + 1;
		}
		_putchar('\n');
		row = row + 1;
	}
	return (0);
}
