#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a listint_t
 * @head: ptr to ptr to the head of the list
 * @n: the new node value
 * Return: The address of the new element or NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode;
	listint_t *find_last;

	NewNode = malloc(sizeof(listint_t));
			if (NewNode == NULL)
			{
			return (NULL);
			}
			NewNode->n = n;
			NewNode->next = NULL;
	if (*head == NULL)
	{
	*head = NewNode;
	}
	else
	{
	find_last = *head;
	while (find_last->next != NULL)
	find_last = find_last->next;
	find_last->next = NewNode;
	}
	return (NewNode);
}
