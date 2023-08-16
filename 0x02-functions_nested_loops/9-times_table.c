#indlude "main.h"

/**
 *
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0,  0,  0,  0, ...
 * 0,  1,  2,  3, ...
 *
 */
void times_table(void)
{
	int num, prod, mult;

	for (num = 0 ; num <= 9 ; num++)
	_putchar ('0');
	for (mult = 1; mult <= 9 ; mult++)
	{
	_putchar(',');
	_putchar(' ');
	prod = num * mult;
	if (prod <= 9)
	_putchar(' ');
	else
	_putchar((prod / 10) + '0');
	_putchar((prod % 10) + '0');
}
	_putchar('\n');
}
