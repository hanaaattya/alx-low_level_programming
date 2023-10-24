#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Free a listint_t
 * @head: ptr to ptr to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *find_last;

	if (head == NULL || *head == NULL)
	{
	return;
	}
	while (*head != NULL)
	{
		find_last = (*head)->next;
		free(*head);
		*head = find_last;
	}
}
