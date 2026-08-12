#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

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

int _putchar(char c);
unsigned int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
