#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int first = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
	temp = ht->array[i];
	while (temp != NULL)
	{
		if (!first)
			printf(", ");
	printf("'%s': '%s'", temp->key, temp->value);
	first = 0;
	temp = temp->next;
	}
	}
	printf("}\n");
}
