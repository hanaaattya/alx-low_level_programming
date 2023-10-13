#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print anything based on the format string
 * @format: Format string containing specifiers for different data types
 *
 * return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *p = format;

	va_start(args, format);
	while (*p)
	{
	char c = *p;
	char *s;

	p++;
	switch (c)
	{
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char *);
			printf("%s", s ? s : "(nil)");
			break;
			default:
			break;
	}
	if (*p)
		printf(", ");
	}
	printf("\n");
	va_end(args);
}
