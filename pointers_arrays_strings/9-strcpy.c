#include "main.h"

/**
 * _strcpy - Copies a string to another buffer
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	dest[index] = '\0';

	return (dest);
}
