#include "main.h"

/**
 * clear_bit - Sets the value to 0 of a bit
 * @n: ptr to num to clear the bit
 * @index: index of the bit to clear
 * Return: 1 if worked or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	i = 1UL << index;
	i = ~i;
	*n = *n & i;
	return (1);
}
