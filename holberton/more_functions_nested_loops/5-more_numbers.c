#include "main.h"

/**
 * more_numbers - print numbers from 1 - 14 10 times.
 *
 * return: printed output 10 times.
 */

void more_numbers(void)
{
	int rows;
	int numbers;

	for (rows = 0; rows <= 9; rows++)
	{
		numbers = 0;

		for (numbers = 0; numbers <= 14; numbers++)
		{

			if (numbers >= 10)
			{
				_putchar((numbers / 10) + '0');
			}

				_putchar((numbers % 10) + '0');
		}
		_putchar('\n');
	}
}
