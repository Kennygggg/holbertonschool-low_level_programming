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
	int read_count;

	while (1)
	{
		printf("Welcome! Mathmetics done for you!\n\n"
	 	"Simple Calculator\n"
	 	"1) Add\n"
	 	"2) Subtraction\n"
		"3) Mulitply\n"
		"4) Divide\n"
		"0) Quit\n\n"
		"Choose an Operation (0-1): \n");

		read_count = scanf("%d", &choice);

		if (read_count == 1 && choice == 0)
		{
			printf("Bye!");
			return (0);
		}

		if (read_count != 1 || choice < 1 || choice > 4)
		{
			printf("Invalid choice\n\n\n");
		}
	}
	return (0);
}
