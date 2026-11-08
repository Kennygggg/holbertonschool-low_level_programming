#include <stdio.h>

/**
 * main - Demostrating the concept of variables and arithemtics
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int score = 10;

	printf("Starting score: %d\n", score);

	score = score + 3;
	printf("After addition: %d\n", score);

	score = score * 3;
	printf("After multiplication: %d\n", score);

	return (0);
}
