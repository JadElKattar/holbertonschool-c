#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - print the entire string
 *@separator: separates
 *@n: arguments
 *
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int x;
	char *v;

	va_start(arguments, n);

	for (x = 0; x < n; x++)
	{
		v = va_arg(arguments, char *);
		if (v != NULL)
			printf("%s", v);
		else
			printf("(nil)");
		if (x != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(arguments);
	printf("\n");
}
