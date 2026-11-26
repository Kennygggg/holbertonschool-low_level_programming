#include "display.h"
#include <stdio.h>

void print_plain(const char *text)
{
	printf("%s\n", text);
}

void print_label(const char *text)
{
	printf("Message: %s\n", text);
}

void print_bracket(const char *text)
{
	printf("[%s]\n", text);
}

