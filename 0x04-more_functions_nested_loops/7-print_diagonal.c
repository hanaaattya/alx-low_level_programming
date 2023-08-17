#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: number of times the var should be printed
 */
void print_diagonal(int n)
{
	int i, h;

	if (n <= 0)
	_putchar('\n');
	else
	{
	for (i = 1 ; i <= n ; i++)
{
	for (h = 1 ; h <= i ; h++)
{
	_putchar(' ');
}
	_putchar('\\');
	_putchar('\n');
}
}
}
