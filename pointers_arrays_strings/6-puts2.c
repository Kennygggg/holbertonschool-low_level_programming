#include "main.h"

/**
* puts2 - This functions prints every other character of a string starting
* with the first chracter.
*
* @str: checks string value from main.
*/

void puts2(char *str)
{
	int length;

	length = 0;

	while (str[length] != '\0')
	{
		if (str[length] % 2 == 0)
		{
		_putchar(str[length]);
		}
		length++;
	}
}
