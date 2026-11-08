#include "main.h"

/**
 * _islower - a function that checks for lowercase chracter.
 * returns 1 if &c is lower case.
 *
 * @c: The value to check
 *
 * Return: 1 if true or 0 if false.
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
