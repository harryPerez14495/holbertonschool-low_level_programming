#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to the new string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int length1;
	unsigned int length2;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length1 = 0;
	while (s1[length1] != '\0')
		length1++;

	length2 = 0;
	while (s2[length2] != '\0')
		length2++;

	result = malloc(sizeof(char) * (length1 + length2 + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		result[i] = s1[i];

	for (j = 0; j < length2; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
