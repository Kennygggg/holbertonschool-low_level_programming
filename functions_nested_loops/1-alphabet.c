#include "main.h"

/**
 * print_alphabet - runs loop to display a -z
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int start;

	start = 'a';

	while (start <= 'z')
	{
		_putchar(start);
		start = start + 1;
	}
	_putchar('\n');
}
