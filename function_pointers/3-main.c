#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs a mathematical operation
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int first;
	int second;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	first = atoi(argv[1]);
	second = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && second == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operation(first, second));

	return (0);
}
