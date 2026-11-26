#include "variadic_functions.h"

/**
* sum_them_all - is a function that sums numbers.
*
* @n: value from main.
*
* Return: returns total of summed numbers.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i;
	int next_number;
	int total;

	if (n == 0)
	{
		return (0);
	}

	va_start(num_list, n);

	total = 0;

	for (i = 0; i < n; i++)
	{
		next_number = va_arg(num_list, int);
		total = total + next_number;
	}
	va_end(num_list);
	return (total);
}
