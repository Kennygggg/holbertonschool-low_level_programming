#include "main.h"

/**
 * reverse_array - this functions reverses the array from main.
 *
 * @a: this is the array
 *
 *@n: this is number of arary.
 *
 */

void reverse_array(int *a, int n)
{
	int temp;
	int right;
	int left;

	right = n - 1;
	left = 0;

	while (left < right)
	{
		temp = a[right];
		a[right] = a[left];
		a[left] = temp;
		left++;
		right--;
	}
}
