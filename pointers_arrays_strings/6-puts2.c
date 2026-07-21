#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: String to print
 */
void puts2(char *str)
{
	int index;
	int length;

	length = 0;

	while (str[length] != '\0')
		length++;

	for (index = 0; index < length; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
