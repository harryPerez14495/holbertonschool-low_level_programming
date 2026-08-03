#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 *
 * Return: 0 on success, or 1 if the argument count is incorrect
 */
int main(int argc, char *argv[])
{
	int number1;
	int number2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	result = number1 * number2;

	printf("%d\n", result);

	return (0);
}
