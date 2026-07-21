#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: String to encode
 *
 * Return: Pointer to s
 */
char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int index;
	int letter;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (letter = 0; letter < 10; letter++)
		{
			if (s[index] == letters[letter])
				s[index] = numbers[letter];
		}
	}

	return (s);
}
