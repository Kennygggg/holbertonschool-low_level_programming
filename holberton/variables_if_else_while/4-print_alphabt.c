#include <stdio.h>

/**
 * main - print a - z except q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter = letter + 1;
	}
	putchar('\n');
	return (0);
}
