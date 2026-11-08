#include "main.h"
#include <stdio.h>

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
