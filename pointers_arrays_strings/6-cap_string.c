#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: String to modify
 *
 * Return: Pointer to s
 */
char *cap_string(char *s)
{
	int index;
	int capitalize;

	index = 0;
	capitalize = 1;

	while (s[index] != '\0')
	{
		if (capitalize && s[index] >= 'a' && s[index] <= 'z')
			s[index] = s[index] - 'a' + 'A';

		if (s[index] == ' ' || s[index] == '\t' ||
		    s[index] == '\n' || s[index] == ',' ||
		    s[index] == ';' || s[index] == '.' ||
		    s[index] == '!' || s[index] == '?' ||
		    s[index] == '"' || s[index] == '(' ||
		    s[index] == ')' || s[index] == '{' ||
		    s[index] == '}')
			capitalize = 1;
		else
			capitalize = 0;

		index++;
	}

	return (s);
}
