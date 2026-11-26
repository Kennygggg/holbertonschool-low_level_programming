#include "display.h"

/**
*
*
*/

int main(int argc, char *argv[])
{
	void (*selected_print)(const char *);

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	selected_print = get_style(argv[1]);
	if (selected_print == NULL)
	{
		printf("Error\n");
		return (99);
	}
	selected_print(argv[2]);
	return (0);
}
