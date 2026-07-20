#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14 ten times
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int line;
	int number;

	line = 0;
	while (line < 10)
	{
		number = 0;
		while (number <= 14)
		{
			if (number >= 10)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
			number++;
		}
		_putchar('\n');
		line++;
	}
}
