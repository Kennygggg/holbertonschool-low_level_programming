#include "main.h"

/**
* print_rev - this function is to print the string from main in reverse
*
* @s: checks the value of pointer.
*/

void print_rev(char *s)
{
	int typer;

	typer = 0;

	while (s[typer] != '\0')
	{
		typer++;
	}
	typer--;

	while (s[typer] >= 0)
	{
		_putchar(s[typer]);
		typer--;
	}
	_putchar('\n');
}

