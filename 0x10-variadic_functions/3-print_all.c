#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_int - Print int
 * @argsp: va_list to get the argument.
 */
void print_int(va_list argsp)
{
	printf("%d", va_arg(argsp, int));
}

/**
 * print_char - Print char
 * @argsp: va_list to get the argument.
 */
void print_char(va_list argsp)
{
	printf("%c", va_arg(argsp, int));
}

/**
 * print_float - Print float
 * @argsp: va_list to get the argument.
 */
void print_float(va_list argsp)
{
	printf("%f", (double)va_arg(argsp, double));
}

/**
 * print_string - Print string
 * @argsp: va_list to get the argument.
 */
void print_string(va_list argsp)
{
	char *string;

	string = va_arg(argsp, char *);
	if (string == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", string);
	}
}

/**
 * print_all - Print anything based on the format string
 * @format: Format string containing specifiers for different data types
 *
 * return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	const char *separator = "";

	va_start(args, format);

	while (format && format[i])
{

	switch (format[i] == 'i')
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
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				{
				printf("%s(nil)", separator);
				}
			else
				printf("%s%s", separator, str);
	break;
}
	default:
	break;
}
	separator = ", ";
	i++;
}

	printf("\n");
	va_end(args);
}
