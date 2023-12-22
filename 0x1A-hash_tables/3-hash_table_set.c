#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds or updates element in the hash table
 * @ht: hash table to modify
 * @key:  key & can't be an empty string.
 * @value: value associated with the key must be duplicated.
 *
 * Return: 1 if succes, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new_hash_node;
	hash_node_t *c;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	
	c = ht->array[i];
	while (c != NULL)
	{
		if (strcmp(c->key, key) == 0)
		{
			free(c->value);
			c->value = strdup(value);
			if (c->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		c = c->next;
	}

	new_hash_node = malloc(sizeof(hash_node_t));
	if (new_hash_node == NULL)
	{
		return (0);
	}
	new_hash_node->key = strdup(key);
	new_hash_node->value = strdup(value);

	if (new_hash_node->value == NULL || new_hash_node->key == NULL)
	{
		free(new_hash_node->key);
		free(new_hash_node->value);
		free(new_hash_node);
		return (0);
	}
	new_hash_node->next = ht->array[i];
	ht->array[i] = new_hash_node;

	return (1);
}
