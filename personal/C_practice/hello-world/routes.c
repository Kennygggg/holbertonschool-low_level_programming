#include <stdio.h>

/**
 * main - Displays stored value and storage in bytes.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int attempts = 250;

	printf("Stored value: %d\n", attempts);
	printf("Storage: %lu bytes.\n", (unsigned long) sizeof(attempts));
	return (0);
}
