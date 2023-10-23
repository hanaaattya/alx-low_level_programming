#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - add new node
 * @head: ptr
 * @str: ptr
 *
 * Return: new
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));
		if (new == NULL)
		{
		return (NULL);
		}

	new->str = strdup(str);

	if (new->str == NULL)
	{
	free(new);
	return (NULL);
	}
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;

	return (new);
}
