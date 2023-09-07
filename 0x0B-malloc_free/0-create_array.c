#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it with a specific char.
 * @size: the size of the memory to print
 *
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *n = (char *)malloc(size);
	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
