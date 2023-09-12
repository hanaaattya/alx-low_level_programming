#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: int
 * return: The factorial of n, or -1 if n is negative or 1 if n= 0,1
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}

	else if (n == 0 || n == 1)
	{
	return (1);
	}

	else
	{
	return (n * factorial(n - 1));
	}
}
