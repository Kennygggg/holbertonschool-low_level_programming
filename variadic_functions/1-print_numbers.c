#include "variadic_functions.h"

/**
* print_numbers - this function is to print numbers.
*
* @n: number of elements to print.
*
* @separator: this is a string
*
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int next_number;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		next_number = va_arg(list, int);

		printf("%d", next_number);

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
