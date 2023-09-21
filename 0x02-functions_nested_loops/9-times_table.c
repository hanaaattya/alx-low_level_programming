#include "main.h"

/**
 *
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0,  0,  0,  0, ...
 * 0,  1,  2,  3, ...
 * Return: Always 0 (success)
 */
void times_table(void)
{
	int i, prod, j;

	for (i = 0 ; i <= 9 ; i++)
{
	for (j = 0; j <= 9 ; j++)
	{
	prod = i * j;
	if (prod < 10)
	{
		_putchar( prod + '0');
	}
	else
	{
		_putchar ((prod / 10 ) + '0');
		_putchar ((prod % 10) + '0');
	}

	if (j < 9)
	{
	_putchar (',');
	_putchar (' ');
	}
	}
	_putchar ('\n');
}
}
