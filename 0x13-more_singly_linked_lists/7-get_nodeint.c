#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node
 * @head: ptr to the head
 * @index: The index of the node
 * Return: ptr to the nth node or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head)
	{
	if (counter == index)
	{
		return (head);
	}
	head = head->next;
	counter++;
	}
	return (NULL);
}
