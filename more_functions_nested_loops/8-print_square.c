#include "main.h"

/**
 * print_square - Prints a square using hash characters
 * @size: Size of the square
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	row = 0;
	while (row < size)
	{
		column = 0;
		while (column < size)
		{
			_putchar('#');
			column++;
		}
		_putchar('\n');
		row++;
	}
}
