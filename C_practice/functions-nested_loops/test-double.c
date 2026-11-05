#include "main.h"

/**
 * main - Tests double_number with the argument 4
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int result;
	int input;

	input = 3;
	result = double_number(input +1);

	_putchar('0' + result);
	_putchar('\n');
	_putchar('0' + input);
	_putchar('\n');
	return (0);
}
