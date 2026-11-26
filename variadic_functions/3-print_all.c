#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_all - is a function that prints everything from main.
*
* @format: is all types passed from main.
*
*/

void print_all(const char * const format, ...)
{
	va_list values;
	int index;
	char *str;
	char format_type;
	const char *separator;

	va_start(values, format);
	index = 0;
	separator = "";

	while (format != NULL && format[index] != '\0')
	{
		format_type = format[index];
		index++;

		switch (format_type)
		{
			case 'c':
				printf("%s%c", separator, va_arg(values, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(values, int));
				break;
			case 's':
				str = va_arg(values, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			case 'f':
				printf("%s%f", separator, va_arg(values, double));
				break;
			default:
				continue;
		}
		separator = ", ";
	}
	va_end(values);
	printf("\n");
}
