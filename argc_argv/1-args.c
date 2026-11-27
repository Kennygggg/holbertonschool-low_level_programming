#include <stdio.h>

/**
* main - prints the number of command arguments.
*
* @argc: number of arguments.
*
* @argv: string but not in use.
*
* Return: printed number of command arguments
*
*/

int main(int argc, char *argv[])
{
	int number;

	(void)argv;

	number = argc - 1;

	printf("%d\n", number);
	return (0);
}
