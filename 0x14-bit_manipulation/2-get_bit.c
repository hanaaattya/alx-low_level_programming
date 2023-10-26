#include "main.h"

/**
 * get_bit - Returns the value of a bit
 * @n: num to get the bit
 * @index: index of the bit to retrieve
 * Return: value of the bit at the specified index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	return ((int)((n >> index) & 1));
}
