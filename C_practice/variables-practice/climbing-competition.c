#include <stdio.h>

/**
 * main - This will simuilate point counting system for rock climbing
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int routes = 7;
	int points = 10;
	int penalty = 5;

	points = routes * points;
	points = points - penalty;
	printf("Final points: %d\n", points);
	return (0);
}
