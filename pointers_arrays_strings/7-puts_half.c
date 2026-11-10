#include "main.h"

/**
* puts_half - This function takes the string from main and prints the last half
*
* @str: checks the string from main
*/

void puts_half(char *str)
{
	int length;
	int half;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	half = (length + 1) / 2;

	length = half;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
