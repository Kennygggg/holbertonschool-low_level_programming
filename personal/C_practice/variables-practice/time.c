#include <stdio.h>

/**
* main - Demostrating my competency for division arithemtic
*
* Return: Always 0 (success)
*/

int main(void)
{
	int total_minutes = 137;
	int hours = 60;
	int minutes = 1;

	total_minutes = total_minutes + hours;
	total_minutes = total_minutes + minutes;
	total_minutes = total_minutes - minutes;
	total_minutes = total_minutes - hours;
	printf("Hours: %d\n", total_minutes / hours);
	printf("Minutes: %d\n", total_minutes % hours);
	return (0);
}
