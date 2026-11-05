#include "main.h"

/**
 * _isalpha - Checking if value is an alphabet
 *
 * @c: the value to check
 *
 * Return: either 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
