#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: String to print
 */
void puts_half(char *str)
{
	int length;
	int index;

	length = 0;

	while (str[length] != '\0')
		length++;

	index = (length + 1) / 2;

	while (index < length)
	{
		_putchar(str[index]);
		index++;
	}

	_putchar('\n');
}
