#include "main.h"

/**
 * set_bit - Sets the value of a bit 1
 * @n: ptr to num to set the bit
 * @index: The index of the bit to set
 * Return: 1 if worked or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	 unsigned long int i;

	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	i = 1UL << index;
	*n = *n | i;
	return (1);
}
