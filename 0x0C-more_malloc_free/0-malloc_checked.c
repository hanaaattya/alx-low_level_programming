#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: memory to be allocated
 *
 * Return: mal
 */
void *malloc_checked(unsigned int b)
{
	void *mal = malloc(b);

	if (mal == NULL)
	{
	printf("Memory allocation failed\n");
	exit(98);
	}
	return (mal);
}

