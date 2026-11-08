#include "main.h"

/**
 * _abs - A function that computes the absolute (positive) value of an
 * integar.
 *
 * @number: The integar whose absolute value is calculated.
 *
 * Return: absolute integar
 */

int _abs(int number)
{
	if (number < 0)
	{
		number = number * -1;
		return (number);
	}
	else
	{
		number = number;
		return (number);
	}
}
