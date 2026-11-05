#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
    int start;
    
    start = 'a';

    while (start <= 'z')
    {
	    _putchar(start);
	    start = start + 1;
    }
    putchar('\n');
}
