#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - Count the num of elements in listint_t
 * @h: ptr to the head of the list
 * Return: The num of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
	h = h->next;
	}
	return (count);
}
