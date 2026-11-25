#include "function_pointers.h"

/**
* print_name - is a function that calls another function.
*
* @name: string value from main.
*
* @f: function being called in this function.
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

