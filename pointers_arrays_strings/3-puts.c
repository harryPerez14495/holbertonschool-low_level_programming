#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: String to print
 */
void _puts(char *str)
{
	int index;

	index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}

	_putchar('\n');
}
