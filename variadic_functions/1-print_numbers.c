#include "variadic_functions.h"

/**
 * print_integer - prints an integer
 * @number: integer to print
 */
static void print_integer(int number)
{
	unsigned int value;
	unsigned int divisor;

	if (number < 0)
	{
		_putchar('-');
		value = -(unsigned int)number;
	}
	else
	{
		value = (unsigned int)number;
	}

	divisor = 1;
	while (value / divisor >= 10)
		divisor *= 10;

	while (divisor > 0)
	{
		_putchar((value / divisor) % 10 + '0');
		divisor /= 10;
	}
}

/**
 * print_numbers - prints numbers separated by a string
 * @separator: string placed between the numbers
 * @n: number of integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	unsigned int j;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		print_integer(va_arg(numbers, int));

		if (separator != NULL && i < n - 1)
		{
			for (j = 0; separator[j] != '\0'; j++)
				_putchar(separator[j]);
		}
	}

	va_end(numbers);
	_putchar('\n');
}
