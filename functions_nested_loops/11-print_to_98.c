#include "main.h"

void print_to_98(int n)
{
	int start;
	int negative;
	start = n;
	while (n >= 98)
	{
		if (n != start)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (n >= 100)
		{
			_putchar(n / 100 + '0');
		}
		if (n >= 10)
		{
			_putchar(n / 10 + '0');
		}
			_putchar(n % 10 + '0');
			n = n - 1;
	}
	while (n <= 98)
	{
		if (n != start) 
		{
			_putchar(',');
			_putchar(' ');
		}
		negative = n;
		if (negative < 0)
		{
			negative = negative * -1;
			_putchar('-');
		}
		if (negative >= 10)
		{
			_putchar(negative / 10 + '0');
		}
			_putchar(negative % 10 + '0')
			n = n + 1;
	}
	_putchar('\n');
	return;
}
