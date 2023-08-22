#include "main.h"

/**
 * swap_int - swap_int
 * @a:int parameter
 * @b: int parameter
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
