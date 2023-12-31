#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of strings passed to the function.
 *
 * return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	string = va_arg(args, const char *);
	if (string == NULL)
		printf("(nil)");
	else
		 printf("%s", string);
	if (i < n - 1 && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
