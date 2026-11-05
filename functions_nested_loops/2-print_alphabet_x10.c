#include "main.h"

/**
 * print_alphabet_x10- print a-z
 * 10 times
 *
 * return - something something
 */

void print_alphabet_x10(void)
{
	int start;
	int repeater;

	repeater = 0;

	while (repeater < 10)
	{
		start = 'a';
		while (start <= 'z')
		{
			_putchar(start);
			start = start + 1;
		}
		repeater++;
		if (repeater < 10)
		{
			_putchar('\n');
		}
	}
}
