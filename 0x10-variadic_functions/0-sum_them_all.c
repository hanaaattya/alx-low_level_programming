#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arg
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i = n;
	va_list args;

	va_start(args, n);

	if (n <= 0)
	{
	return (0);
	}
	while (i--)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
