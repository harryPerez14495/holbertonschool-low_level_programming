#include "main.h"

/**
 * print_line - Draws a straight line using underscores
 * @n: Number of underscores to print
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
