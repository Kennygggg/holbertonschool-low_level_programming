#include "main.h"

/**
 * _isupper - standard C function that checks whether a 
 * character is an uppercase letter.
 *
 * @c: provide value from main
 *
 * Return: return either true or false.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

