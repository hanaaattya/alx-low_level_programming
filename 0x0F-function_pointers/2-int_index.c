#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer.
 * @array: array
 * @size: int
 * @cmp: int
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		for (i = 0; ii < size ; i++)
			if (cmp(array[i]))
			{
				return (1);
			}
	}
	return (-1);
}
