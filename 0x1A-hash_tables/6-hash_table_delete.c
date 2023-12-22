#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *c;
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL)
	{
	return;
	}
	for (i = 0; i < ht->size; i++)
	{
	c = ht->array[i];
	while (c != NULL)
	{
	temp = c;
	c = c->next;
	free(temp->key);
	free(temp->value);
	free(temp);
	}
	}
	free(ht->array);
	free(ht);
}
