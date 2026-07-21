#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Difference between the first different characters
 */
int _strcmp(char *s1, char *s2)
{
	int index;

	index = 0;

	while (s1[index] == s2[index] && s1[index] != '\0')
		index++;

	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
