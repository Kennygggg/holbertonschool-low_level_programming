#include "main.h"

/**
* _strlen - this function checks the string from main and return number of
* characters to main in int.
*
* @s: checks the string from main
*
* Return: number of chracters from checked string.
*/

int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

