#include "main.h"

/**
 * reverse_array - Reverses the content of an integer array
 * @a: Array to reverse
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int left;
	int right;
	int temporary;

	left = 0;
	right = n - 1;

	while (left < right)
	{
		temporary = a[left];
		a[left] = a[right];
		a[right] = temporary;
		left++;
		right--;
	}
}
