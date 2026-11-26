#ifndef DISPLAY_H
#define DISPLAY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct style
{
	const char *name;
	void (*print)(const char *text);

} style_t;

void (*get_style(const char *name))(const char *);
void print_plain(const char *text);
void print_label(const char *text);
void print_bracket(const char *text);

#endif


