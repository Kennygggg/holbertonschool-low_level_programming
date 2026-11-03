#include <stdio.h>

/**
 * main - Demonstrating to write code to exchange assigned values.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int first = 3;
	int second = 8;
	int third = first;
	
	first = second;
	second = third;

	printf("First: %d\n", first);
	printf("Second: %d\n", second);
	return (0);
}	
