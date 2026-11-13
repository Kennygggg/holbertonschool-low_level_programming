#include "main.h"
/**
* _strchr - this function locates a character and returns from there.
*
* @s: this is value used to check
*
* @c: this is the avalue used to check for.
*
* Return: returns string from checked index.
*/

char *_strchr(char *s, char c)
{
	int index;
	char letter;

	index = 0;
	letter = c;

	while (s[index] != letter)
	{
		if (s[index] == '\0')
		{
			return (0);
		}
		index++;
	}
	return (&s[index]);
}
