#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: ptr
 * @n: num of arg
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	char *str;
	va_list args;

	if (!n)
	{
		printf("\n");
	return;
	}
	va_start(args, n);
	while (i--)
	printf("%s%s", (str = va_arg(args, char *)) ? str : "(nill)",
	i ? (separator ? separator : "") : "\n");
	va_end(args);
}
