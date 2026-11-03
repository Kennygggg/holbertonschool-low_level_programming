#include <stdio.h>

/**
 * main - Demostrate logical operators in a bridge challenge
 *
 * They are at least 16
 *
 * They have a ticket or a membership
 *
 * They are not banned
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int age = 18;
	int has_ticket = 0;
	int is_member = 1;
	int is_banned = 0;
	int eligible;

	eligible = (age >= 16) && (is_member || has_ticket) && !is_banned;
	if (eligible)
	{
		printf("ELIGIBLE\n");
	}
	else
	{
		printf("NOT ELIGIBLE\n");

	}
	return (0);
}
