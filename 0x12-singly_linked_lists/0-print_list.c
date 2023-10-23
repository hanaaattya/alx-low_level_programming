#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of list_t
 * @h: ptr to the head of the list
 * Return: The num of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
	if (h->str == NULL)
	printf("[0] (nil)\n");
	else
	{
	printf("[%d] %s\n", h->len, h->str);
	}
	h = h->next;
	count++;
	}
	return (count);
}
