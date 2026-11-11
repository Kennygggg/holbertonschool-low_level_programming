#include "main.h"

/**
* _atoi - this function converts string from main to integars.
*
* @s: checks string value from main
*
* Return: returns sign * number which is either (+ or -) and number.
*
*/

int _atoi(char *s)
{
	int sign;
	int length;
	int number;

	length = 0;
	sign = 1;
	number = 0;

	while (s[length] != '\0' && !(s[length] >= '0' && s[length] <= '9'))
	{
		if (s[length] == '-')
		{
			sign = sign * -1;
		}
		length++;
	}

	while (s[length] >= '0' && s[length] <= '9')
	{
		number = number * 10 + (s[length] - '0');
		length++;
	}
	number = sign * number;
	return (number);
}
