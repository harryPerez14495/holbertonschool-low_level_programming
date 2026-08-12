#include <stdio.h>
#include "variadic_functions.h"

/**
 * struct print_type - associates a type with a print function
 * @type: format character
 * @print: function used to print the argument
 */
typedef struct print_type
{
	char *type;
	void (*print)(va_list arguments);
} print_t;

/**
 * print_character - prints a character
 * @arguments: list of arguments
 */
static void print_character(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}

/**
 * print_integer - prints an integer
 * @arguments: list of arguments
 */
static void print_integer(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}

/**
 * print_float - prints a floating-point number
 * @arguments: list of arguments
 */
static void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}

/**
 * print_string - prints a string
 * @arguments: list of arguments
 */
static void print_string(va_list arguments)
{
	char *string;

	string = va_arg(arguments, char *);
	if (string == NULL)
		string = "(nil)";

	printf("%s", string);
}

/**
 * print_all - prints arguments according to a format string
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	print_t types[] = {
		{"c", print_character},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list arguments;
	unsigned int i;
	unsigned int j;
	char *separator;

	i = 0;
	separator = "";
	va_start(arguments, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j].type != NULL)
		{
			if (format[i] == types[j].type[0])
			{
				printf("%s", separator);
				types[j].print(arguments);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(arguments);
	printf("\n");
}
