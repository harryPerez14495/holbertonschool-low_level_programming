#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to convert
 *
 * Return: The converted integer, or 0 if no numbers are found
 */
int _atoi(char *s)
{
	int index;
	int sign;
	int started;
	unsigned int number;

	index = 0;
	sign = 1;
	started = 0;
	number = 0;

	while (s[index] != '\0')
	{
		if (s[index] >= '0' && s[index] <= '9')
		{
			started = 1;
			number = (number * 10) + (s[index] - '0');
		}
		else if (started)
		{
			break;
		}
		else if (s[index] == '-')
		{
			sign = -sign;
		}

		index++;
	}

	return (number * sign);
}
