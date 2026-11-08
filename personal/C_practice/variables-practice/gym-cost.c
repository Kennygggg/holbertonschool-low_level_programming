#include <stdio.h>

/**
 * main - here we're demostrating our competence in precedence arithemtic.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int entry = 12;
	int shoe_hire = 8;
	int people = 5;
	int total;

	total = (entry + shoe_hire) * people;
	printf("Total cost: %d\n", total);
	return (0);
}
