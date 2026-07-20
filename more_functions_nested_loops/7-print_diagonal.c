#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using backslashes
 * @n: Number of backslashes to print
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int line;
	int spaces;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	line = 0;
	while (line < n)
	{
		spaces = 0;
		while (spaces < line)
		{
			_putchar(' ');
			spaces++;
		}
		_putchar('\\');
		_putchar('\n');
		line++;
	}
}
