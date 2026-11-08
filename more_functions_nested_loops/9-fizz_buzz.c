#include "main.h"
#include <stdio.h>

/**
 * FizzBuzz - checks whether a number has a value of multiples of 3 and 5,
 * or number with both 3 and 5
 *
 * @number: stored value from main
 *
 * Return: returns checked value based on the function.
 */

int FizzBuzz(int number)
{
	int check;

	check = number;

	if (check % 3 == 0 && check % 5 == 0)
	{
		printf("FizzBuzz");
	}
	else if (check % 3 == 0)
	{
		printf("Fizz");
	}
	else if (check % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", check);
	}
	return (check);
}
