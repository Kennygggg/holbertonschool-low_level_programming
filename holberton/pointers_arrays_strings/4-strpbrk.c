#include "main.h"

/**
* _strpbrk - This function searches a string for any of a set of bytes.
*
* @accept: string of accepted bytes 'characters'
*
* @s: string to check against.
*
*Return: returns set of bytes.
*/

char *_strpbrk(char *s, char *accept)
{
	int index;
	int letter;

	index = 0;

	while (s[index] != '\0')
	{
		letter = 0;
		while (accept[letter] != '\0')
		{
			if (s[index] == accept[letter])
			{
				return (&s[index]);
			}
			letter++;
		}
		index++;
	}
	return (0);
}
