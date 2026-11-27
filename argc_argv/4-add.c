#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
* main - sum only numbers.
*
* @argc: number of command line arguments
*
* @argv: string arguments.
*
* Return: total of sum
*
*/

int main(int argc, char *argv[])
{
	int total;
	int index;
	int index2;

	total = 0;

	for (index = 1; index < argc; index++)
	{
		index2 = 0;

		while (argv[index][index2] != '\0')
		{
			if (!isdigit((unsigned char)argv[index][index2]))
			{
				printf("Error\n");
				return (1);
			}
			index2++;
		}
	}

	for (index = 0; index < argc; index++)
	{
		total = total + (atoi(argv[index]));
	}
	printf("%d\n", total);
	return (0);
}
