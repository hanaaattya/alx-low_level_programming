#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Searches for an integer in the array
 * @array: array
 * @size: Number of elements in the array
 * @cmp: Pointer to  compare function
 *
 * Return: Index of the first matching element
 * or if no matches or size <= 0 (-1)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = size;
	if (array == NULL || cmp == NULL || size <= 0)
	{
	return (-1);
	}
	for (i = 0; i < size; i++)
		{
		if (cmp(array[i]))
			return (i);
		}
	return (-1);
}
