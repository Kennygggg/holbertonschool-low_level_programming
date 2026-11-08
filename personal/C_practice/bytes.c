#include <stdio.h>

/**
 * main -  to find the data size of types
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("char: %lu byte(s)\n", (unsigned long) sizeof(char));
	printf("unsigned int: %lu byte(s)\n", (unsigned long) sizeof(unsigned int));
	printf("float: %lu byte(s)\n", (unsigned long) sizeof(float));
	return (0);
}
