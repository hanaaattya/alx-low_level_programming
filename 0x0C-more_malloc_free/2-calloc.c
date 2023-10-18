#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements for the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory or NULL if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_size;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if ((nmemb * size) / nmemb != size)
		return (NULL);
	mem_size = malloc(nmemb * size);
	if (mem_size == NULL)
	return (NULL);
	for (i = 0; i < (nmemb * size) ; i++)
	{
	*((char *) mem_size + i) = 0;
	}
	return (mem_size);
}
