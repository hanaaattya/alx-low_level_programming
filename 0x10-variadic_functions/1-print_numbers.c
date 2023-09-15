#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 *  @separator: ptr
 *  @n: num of arg
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list args;

	va_start(args, n);

	if (n <= 0)
	{
	printf("\n");
		return;
	}
	va_start(args, n);
	while (i--)
		printf("%d%s", va_arg(args, int), i ? (separator ? separator : "") : "\n");
	va_end(args);
}
