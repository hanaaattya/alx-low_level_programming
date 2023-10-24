#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t
 * @head: ptr to ptr to the head
 * Return: n or  0 if empty
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *tmp = *head;

	if (head != NULL && *head != NULL)
	{
	i = tmp->n;
	*head = (*head)->next;
	free(tmp);
	}
	return (i);
}
