#include <stdio.h>

/**
 * main - Demostrate independent integar comparsion challenge.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int age = 16;
	int eligible;

	eligible = age >= 16;
	printf("Age: %d, eligible: %d\n", age, eligible);
	return (0);
}
