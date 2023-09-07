#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars & initializes it with a spec char
 * @size: the size of the memory to print
 * @c: char
 *
 * Return: NULL if size = 0 and
 * Returns a pointer to the array, or NULL if it fails
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
