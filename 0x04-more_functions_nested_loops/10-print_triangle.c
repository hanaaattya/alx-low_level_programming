#include "main.h"

/**
 * print_triangle - draws triangle
 *
 * @size: triangke size
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
{
	for (j = 1; j <= size; j++)
{
	if (i + j <= size)
	_putchar(' ');
	else
	_putchar('#');
}
_putchar('\n');
}
}
