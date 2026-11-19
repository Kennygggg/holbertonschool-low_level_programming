#include "main.h"

/**
* rev_string - this function is to reverse a string from main.
*
* @s: this checks the string from main
*/
void rev_string(char *s)
{
	int left;
	int right;
	char temp;
	int length;

	left = 0;
	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	right = length - 1;

	while (left < right)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;

		left++;
		right--;
	}
}
