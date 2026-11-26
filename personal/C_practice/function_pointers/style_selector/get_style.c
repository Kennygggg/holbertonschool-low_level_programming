#include "display.h"


void (*get_style(const char *name))(const char *)
{
	int i;

	style_t styles[] =
	{
		{"plain", print_plain},
		{"label", print_label},
		{"bracket", print_bracket},
		{NULL, NULL}
	};

	i = 0;

	while (styles[i].name != NULL)
	{
		if (strcmp(styles[i].name, name) == 0)
		{
			return(styles[i].print);
		}
		i++;
	}
	return (NULL);
}
