#include "main.h"
#include <stdio.h>

/**
 * FizzBuzz - Fucntion turn every mutliple 3 and 5 or boh into FizzBuzz
 *
 * @number: checks value from main
 *
 * Return: returns checked value to main
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

/**
 * main - print numbers from 1 - 100 with fizzbuzz
 *
 * Return: Always 0
 */

int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		FizzBuzz(number);

		if (number < 100)
		{
			putchar(' ');
		}

		else
		{
			putchar('\n');
		}
	}
	return (0);
}
