#include "main.h"

/**
 * print_last_digit - This function takes int value and returns
 * with the last digit of the last digit.
 *
 * @digit: checks the value
 *
 * Return: returns the last digit of the checked value
 */

int print_last_digit(int digit)
{
	digit = digit % 10;

	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
