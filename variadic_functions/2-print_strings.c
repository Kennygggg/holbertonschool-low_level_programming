#include "variadic_functions.h"

/**
* print_strings -  this function prints a string.
*
* @n: this number of strings.
*
* @separator: its a string.
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i;
	char *str;

	va_start(num_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(num_list, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num_list);
}
