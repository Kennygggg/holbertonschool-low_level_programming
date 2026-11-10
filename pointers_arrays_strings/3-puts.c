#include "main.h"

/**
* _puts - this is a function to print a string from the string in main
*
* @str: checks the string value from main
*/

void _puts(char *str)
{
	int typer;

	typer = 0;

	while (str[typer] != '\0')
	{
		_putchar(str[typer]);
		typer++;
	}
	_putchar('\n');
}
