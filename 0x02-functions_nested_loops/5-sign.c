#include "main.h"

/**
 * print_sign - prints + if n > 0 and 0 if = 0 and - if n < 0
 *
 * @n:takes integer input for  function
 *
 * Return: returns 1 if + , 0 if 0 , -1 if - (Success)
 */
int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
}
	else if (n == 0)
{
	_putchar('0');
	return (0);
}
	else
{
	_putchar('-');
	return (-1);
}
}
