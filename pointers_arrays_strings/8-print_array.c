#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an integer array
 * @a: Array to print
 * @n: Number of elements to print
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index < n - 1)
			printf(", ");
	}

	printf("\n");
}
