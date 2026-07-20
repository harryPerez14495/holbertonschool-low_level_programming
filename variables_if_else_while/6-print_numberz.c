#include <stdio.h>

/**
 * main - Prints all single digit numbers using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');

	return (0);
}
