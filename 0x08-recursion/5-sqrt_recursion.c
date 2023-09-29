#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: int
 * @guess: int
 *
 * Return: The natural square root of n
 */
int _sqrt_helper(int n, int guess);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - helps Calculate the natural square root of a number
 * @n: int
 * @guess: int
 *
 * Return: The natural square root of n
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (_sqrt_helper(n, guess + 1));
}
