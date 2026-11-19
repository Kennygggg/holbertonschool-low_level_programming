#include "main.h"

/**
* string_toupper - this funtions converts string from lowercase to uppercase.
*
* @str: is string from main.
*
* Return: returns converted uppercase string back to main.
*/

char *string_toupper(char *str)
{
	int index;

	index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
