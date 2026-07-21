#include "main.h"

/**
 * string_toupper - Changes lowercase letters to uppercase
 * @s: String to modify
 *
 * Return: Pointer to s
 */
char *string_toupper(char *s)
{
	int index;

	index = 0;

	while (s[index] != '\0')
	{
		if (s[index] >= 'a' && s[index] <= 'z')
			s[index] = s[index] - 'a' + 'A';

		index++;
	}

	return (s);
}
