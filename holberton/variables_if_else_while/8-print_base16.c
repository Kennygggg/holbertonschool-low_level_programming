#include <stdio.h>

/**
 * main - display all numbers of base 16, aka 1-f.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int hex;
	int abc;

	hex = '0';

	while (hex <= '9')
	{
		putchar(hex);
		hex = hex + 1;
	}

	abc = 'a';

	while (abc <= 'f')
	{
		putchar(abc);
		abc = abc + 1;
	}
	putchar('\n');
	return (0);
}
