#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string in which to search
 * @needle: substring to locate
 *
 * Return: pointer to the substring, or 0
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		i = 0;

		while (needle[i] != '\0' && haystack[i] == needle[i])
			i++;

		if (needle[i] == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}
