#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: array
 * @size: arg
 * @action: int
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
