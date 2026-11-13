#include "main.h"

/**
 * cap_string - Capitalise each word in a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int index;
	int word_start;
	char c;

	index = 0;
	word_start = 1;

	while (str[index] != '\0')
	{
		c = str[index];

		if (word_start == 1 && c >= 'a' && c <= 'z')
		{
			str[index] = c - 32;
		}

		if (c == ' ' || c == '\t' || c == '\n' ||
		    c == ',' || c == ';' || c == '.' ||
		    c == '!' || c == '?' || c == '"' ||
		    c == '(' || c == ')' || c == '{' || c == '}')
		{
			word_start = 1;
		}
		else
		{
			word_start = 0;
		}

		index++;
	}

	return (str);
}
