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
	int i = 0;
	char *str;
	char *separator = "";

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s%s", separator, str ? str : "(nil)");
				break;
			default:
			i++;
			continue;
			}
		separator = (", ");
		i++;
		}
	}
	printf("\n");
	va_end(args);
}
