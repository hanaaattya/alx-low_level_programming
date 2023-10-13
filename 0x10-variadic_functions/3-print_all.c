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
	va_list argsp;
	int i = 0;
	char *separator = "";
	char *v_format = "cifs";
	void (*printers[4])(va_list) = {
		print_char, print_int, print_float, print_string};

	va_start(argsp, format);
	while (format && format[i])
	{
	int n = 0;

	while (v_format[n])
	{
	if (format[i] == v_format[n])
	{
	printf("%s", separator);
	printers[n](argsp);
	separator = ", ";
	}
	n++;
	}
	i++;
	}
	printf("\n");
	va_end(argsp);
}
