#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 using FizzBuzz rules
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	number = 1;
	while (number <= 100)
	{
		if (number % 15 == 0)
			printf("FizzBuzz");
		else if (number % 3 == 0)
			printf("Fizz");
		else if (number % 5 == 0)
			printf("Buzz");
		else
			printf("%d", number);

		if (number < 100)
			printf(" ");
		else
			printf("\n");

		number++;
	}

	return (0);
}
