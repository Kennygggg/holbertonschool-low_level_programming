#include "main.h"

/**
 * leet - Replace selected letters in a string with digits.
 *
 * @s: The string to modify.
 *
 * Return: A pointer to the modified string.
 */

char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char digits[] = "4433007711";
	int index;
	int match;

	index = 0;
	while (s[index] != '\0')
	{
		match = 0;
		while (letters[match] != '\0')
		{
			if (s[index] == letters[match])
			{
				s[index] = digits[match];
				break;
			}
			match++;
		}
		index++;
	}

	return (s);
}
