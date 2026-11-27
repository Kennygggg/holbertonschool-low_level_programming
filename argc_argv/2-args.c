#include <stdio.h>

/**
* main - prints each string argument per line.
*
* @argc: number of command line argument
*
* @argv: string argument
*
* Return: priints string per line
*
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
