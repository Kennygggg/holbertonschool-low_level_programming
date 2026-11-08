#include "main.h"

/**
 * _isdigit - checks if value is a decimal.
 *
 * @c: value from main
 *
 * Return: returns either 1 or 0 depending if value is a numeric
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
