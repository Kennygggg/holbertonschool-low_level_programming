#include "main.h"

/**
 * _strspn - Count the leading bytes of s found in accept.
 *
 * @s: The string to check.
 *
 * @accept: The allowed bytes.
 *
 * Return: The length of the matching prefix.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int index;
	unsigned int letters;
	unsigned int counter;

	index = 0;
	counter = 0;

	while (s[index] != '\0')
	{
		letters = 0;

		while (accept[letters] != '\0')
		{
			if (s[index] == accept[letters])
			{
				counter++;
				break;
			}
			letters++;

			if (accept[letters] == '\0')
			{
				return (counter);
			}
		}
		index++;
	}
	return (counter);
}
