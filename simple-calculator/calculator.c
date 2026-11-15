#include <stdio.h>

/**
* main - this is where the calculator starts and we ask for operation
* input for calculation.
*
* Return: calcuation.
*
*
*/

int main(void)
{
	int choice;

	printf("Welcome! Mathmetics done for you!\n\n"
	"Simple Calculator\n"
	"1) Add\n"
	"2) Subtraction\n"
	"3) Mulitply\n"
	"4) Divide\n"
	"0) Quit\n\n"
	"Choose an Operation (0-1): \n");

	if (scanf("%d", &choice) == 1 && choice == 0)
	{
		printf("Bye!\n");
		return (0);
	}
	return (0);
}
