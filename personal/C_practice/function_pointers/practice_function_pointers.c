#include <stdio.h>

int is_negative(int value)
{
	return (value < 0);
}

int is_zero(int value)
{
	return (value == 0);
}

int find_match(int *values, int size, int (*compare)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (compare(values[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}

int main(void)
{
	int values[] = {8, 0, -3, -5};
	int result;

	result = find_match(values, 4, is_zero);
	printf("%d\n", result);

	return (0);
}
