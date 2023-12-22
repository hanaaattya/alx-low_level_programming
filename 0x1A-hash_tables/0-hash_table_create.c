#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - hash table create
 * @size: the size of the array in the hash table
 *
 * Return: ptr to the newly created hash table, or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int count;
	hash_table_t *new_hash_table;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_table->array == NULL)
	{
	free(new_hash_table);
	return (NULL);
	}
	for (count = 0; count < size; count++)
	{
	new_hash_table->array[i] = NULL;
	}
	new_hash_table->size = size;
	return (new_hash_table);
}
