#include <stddef.h>
#include "main.h"

/**
* _strstr - this function returns string once a from
* the first occurance of match value.
*
* @haystack: This is the string to check
*
* @needle: This is the string to look for a match for in haystack
*
* Return: return a string from the matched string from needle
*/

char *_strstr(char *haystack, char *needle)
{
	int index;
	int match;

	index = 0;



	while (haystack[index] != '\0')
	{

		match = 0;

		while (needle[match] != '\0' && haystack[index + match] == needle[match])
		{
			match++;

			if (needle[match] == '\0')
			{
				return (&haystack[index]);
			}
		}
		index++;
	}
	if (needle == "")
	{
		return (haystack);

	}
	return (NULL);
}
