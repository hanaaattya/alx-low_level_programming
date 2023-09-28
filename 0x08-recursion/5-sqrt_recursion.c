#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: int
 *
 * Return: The natural square root of n
 */
int sqr(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if ((n == 0) || (n == 1))
		return (n);
	return (sqr(n, 1));
}
int sqr(int n, int i)
{
	int x;

	x = (i + n / i) / 2;
	if ((x = i) || (x > i))
	{
	if (x * x == n)
		return (x);
	else
		return (-1);
	}
	return (sqr(n, x));
}
