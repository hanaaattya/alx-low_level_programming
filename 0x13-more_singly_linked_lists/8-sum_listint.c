#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data
 * @head: ptr to the head
 * Return: The sum of all the data or 0 if empty.
 */
int sum_listint(listint_t *head)
{
	int sum_of_all = 0;

	while (head)
	{
	sum_of_all += head->n;
	head = head->next;
	}
	return (sum_of_all);
}
