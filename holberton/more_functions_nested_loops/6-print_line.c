#include "main.h"

/**
 * print_line - this function draws a line for main.
 *
 * @n: checks value from main
 *
 * return: returns (----) lines.
 */

void print_line(int n)
{
	int line;

	for (line = 1; line <= n; line++)
	{
		_putchar('_');
	}

	if (line <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
