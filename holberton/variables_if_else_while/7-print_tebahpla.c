#include <stdio.h>

/**
 * main - display a-b in reverse using putchat
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letter;

	letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter = letter - 1;
	}
	putchar('\n');
	return (0);
}
