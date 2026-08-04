#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes to copy from s2
 *
 * Return: Pointer to the new string, or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int length1;
	unsigned int length2;
	unsigned int copy_length;
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

	if (n >= length2)
		copy_length = length2;
	else
		copy_length = n;

	result = malloc(length1 + copy_length + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		result[i] = s1[i];

	for (j = 0; j < copy_length; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
