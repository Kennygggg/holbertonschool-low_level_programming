#include "main.h"

/**
 * print_sign - returning values for main
 *
 * @n: checking values
 *
 * Return: 1 if positive, -1 if negative, or 0 if zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
