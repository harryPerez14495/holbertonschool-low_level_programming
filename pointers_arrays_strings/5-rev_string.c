#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to reverse
 */
void rev_string(char *s)
{
	int left;
	int right;
	char temporary;

	right = 0;

	while (s[right] != '\0')
		right++;

	right--;
	left = 0;

	while (left < right)
	{
		temporary = s[left];
		s[left] = s[right];
		s[right] = temporary;
		left++;
		right--;
	}
}
