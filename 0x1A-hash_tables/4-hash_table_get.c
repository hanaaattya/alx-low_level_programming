#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table
 * @ht: hash table to look into
 * @key: key to search for
 *
 * Return: The value associated with the element, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int i;

	if (key == NULL || ht == NULL || *key == '\0')
	{
	return (NULL);
	}
	i = key_index((unsigned char *)key, ht->size);

	current = ht->array[i];
	while (current != NULL)
	{
	if (strcmp(current->key, key) == 0)
		return (current->value);
	current = current->next;
	}
	return (NULL);
}
