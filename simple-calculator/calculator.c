#include <stdio.h>
#include "main.h"

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
	double A;
	double B;
	double result;

	printf("Welcome! Mathmetics done for you!\n\n"
	"Simple Calculator\n");
	
	while (1)
	{
	 	printf("1) Add\n"
	 	"2) Subtract\n"
		"3) Mulitply\n"
		"4) Divide\n"
		"0) Quit\n\n"
		"Choose an Operation (0-1): \n");

		printf("Choice: ");
		read_count = scanf("%d", &choice);
		printf("\n\n");

		if (read_count == 1 && choice == 4)
		{
			printf("You have selected divison\n");
			
			while (1)
			{
				printf("A: ");
				scanf("%lf", &A);
				printf("B: ");
				scanf("%lf", &B);

				if (B == 0)
				{
					printf("Error: divison by zero\n");
				}
				else
				{
					result = A / B;
					printf("Result: %g\n\n\n", result);
					break;
				}
			}
		}

		if (read_count == 1 && choice == 3)
		{
			printf("You have selected multiplication\n");
			
			while (1)
			{
				printf("A: ");
				scanf("%lf", &A);
				printf("B: ");
				scanf("%lf", &B);
				result = A * B;
				printf("Result: %g\n\n\n", result);
				break;
			}
		}

		if (read_count == 1 && choice == 1)
		{
			printf("You have selected Addition\n");
			
			while (1)
			{
				printf("A: ");
				scanf("%lf", &A);
				printf("B: ");
				scanf("%lf", &B);
				result = A + B;
				printf("Result: %g\n\n\n", result);
				break;
			}
		}

		if (read_count == 1 && choice == 2)
		{
			printf("You have selected Subtraction\n");
			
			while (1)
			{
				printf("A: ");
				scanf("%lf", &A);
				printf("B: ");
				scanf("%lf", &B);
				result = A - B;
				printf("Result: %g\n\n\n", result);
				break;
			}
		}

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
