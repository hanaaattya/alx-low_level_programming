#include "main.h"

/**
 * flip_bits - Counts the num of bits needed to flip to transform one binary num into another
 * @n: int
 * @m: int
 * Return: num of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int counter = 0;

	 while (xor > 0)
	 {
	 counter += xor & 1;
	 xor >>= 1;
	 }
	 return (counter);
}

