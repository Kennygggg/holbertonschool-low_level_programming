#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int FizzBuzz(int number)
{
	int check;

	check = number;

	if (check % 3 == 0  && check % 5 == 0)
	{

			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
	}

	else if (check % 3 == 0)
	{
		_putchar('F');
		_putchar('i');
		_putchar('z');
		_putchar('z');
	}
	
	else if (check % 5 == 0)
	{
		_putchar('B');
		_putchar('u');
		_putchar('z');
		_putchar('z');
	}

	else if (check >= 100)
	{
		_putchar((check / 100) + '0');
	}

	else if (check >= 10)
	{
		_putchar((check / 10) + '0');
		_putchar((check % 10) + '0');
	}
	
	else 
	{
		_putchar((check % 10) + '0');
	}
	
	return (check);
}

int main(void)
{
	int number;
	
	for (number = 1; number <= 100; number++)
	{
		FizzBuzz(number);
		_putchar(' ');
	}
	return (0);
}
