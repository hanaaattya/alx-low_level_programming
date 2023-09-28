#include "main.h"

/**
 * is_prime_number - checks if the num is prime
 * @n: int
 *
 * Return: 1 if n is prime, else 0 
 */
int prime_finder(int n, int div);
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_finder(n, 2));
}
int prime_finder(int n, int div)
{
	if (div * div > n)
	return (1);
	if (n % div == 0)
		return (0);
	return (prime_finder(n, div + 1));

}
