#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory and initializes it to zero
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: Pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *memory;
	size_t total;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if ((size_t)nmemb > ((size_t)-1) / size)
		return (NULL);

	total = (size_t)nmemb * size;
	memory = malloc(total);

	if (memory == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		memory[i] = 0;

	return (memory);
}
