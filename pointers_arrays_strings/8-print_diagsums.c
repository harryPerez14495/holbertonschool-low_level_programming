#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of two matrix diagonals
 * @a: pointer to the square matrix
 * @size: size of the square matrix
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int first_sum = 0;
	int second_sum = 0;

	for (i = 0; i < size; i++)
	{
		first_sum += a[(i * size) + i];
		second_sum += a[(i * size) + (size - i - 1)];
	}

	printf("%d, %d\n", first_sum, second_sum);
}
