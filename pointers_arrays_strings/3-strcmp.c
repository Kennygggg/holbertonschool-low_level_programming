#include "main.h"

/**
* _strcmp - this functions compares two different strings from main and
* returns a int value for comparision
*
* @s1: checks string value
*
* @s2: checks string value to minus s1
*
* Return: total value of comparison.
*/

int _strcmp(char *s1, char *s2)
{
	int index;
	int total;

	index = 0;

	while (s1[index] == s2[index] && s1[index] != '\0')
	{
		index++;
	}
	total = s1[index] - s2[index];
	return (total);
}
