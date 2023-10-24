#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print all the elements of the list
 * @h: ptr to the head of the list
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
	printf("%d\n", h->n);
	 h = h->next;
	}
	return (count);
}
