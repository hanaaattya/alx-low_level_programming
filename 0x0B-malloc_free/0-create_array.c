#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array
 * @c: character
 * @size: the size of the memory to print
 *
 * Return: wanted_array
 */
char *create_array(unsigned int size, char c)
{
	char *wanted_array;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}
	wanted_array = (char *)malloc(sizeof(char) * size);
	if (wanted_array == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	wanted_array[i] = c;
	}
	return (wanted_array);
}
