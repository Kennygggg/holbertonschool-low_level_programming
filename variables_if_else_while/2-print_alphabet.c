#include <stdio.h>

/**
 * main - Display a-z only use putchar twice.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter = letter + 1;
	}
	putchar('\n');
	return (0);
}

