#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of parameters to add
 *
 * Return: sum of all parameters, or 0 if n is 0
 */
unsigned int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, unsigned int);

	va_end(numbers);

	return (sum);
}
