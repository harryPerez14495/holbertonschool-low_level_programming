#include "main.h"

/**
 * _strncpy - Copies a string using at most n bytes
 * @dest: Destination buffer
 * @src: Source string
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;

	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
