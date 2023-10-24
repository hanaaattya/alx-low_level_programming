#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning of the list
 * @head: ptr to a ptr to the head of the list
 * @n: new node value
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	if (head == NULL)
	{
	return (NULL);
	}
	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
	{
	return (NULL);
	}
	NewNode->n = n;
	NewNode->next = *head;
	*head = NewNode;
	return (NewNode);
}
