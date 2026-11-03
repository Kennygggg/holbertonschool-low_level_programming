#include <stdio.h>

/**
 * main - Demostrating the concept of divisions in arithmetic '/' and '%'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int holds = 23;
	int per_group = 6;
	int groups = holds / per_group;
	int leftover = holds % per_group;

	printf("Complete groups: %d\n", groups);
	printf("Holds left over: %d\n", leftover);
	return (0);
}
	
