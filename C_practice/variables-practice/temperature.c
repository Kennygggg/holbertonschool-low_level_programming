#include <stdio.h>

/**
 * main - This will display the status of the room temperature
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int temperature = 22;

	if (temperature < 15)
	{
		printf("Cold\n");
	}
	else if (temperature >= 25)
	{
		printf("Hot\n");
	}
	else
	{
		printf("Comfortable\n");
	}
	return (0);
	if (temperature < 15)
	{
		printf("Cold\n");
	}
	else if (temperature > 25)
	{
		printf("Hot\n");
	}
	else
	{
		printf("Comfortable\n");
	}
	return (0);
}
