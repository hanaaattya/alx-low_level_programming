#include "main.h"

/**
 * reverse_array - reverse
 * @a: an array of integers
 * @n: the number of elements
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int str = 0;

	int end = n - 1;

	while (str < end)
	{
	int temp = a[str];

	a[str] = a[end];
	a[end] = temp;

	str++;
	end--;
	}
}
