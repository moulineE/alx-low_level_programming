#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: a pointer to the hash table
 * @key: is the key
 *
 * Return:1 if it succeeded, 0 otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (key == NULL || *key == '\0' || ht == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *) key, ht->size);
	if (index >= ht->size)
		return (NULL);
	current = (ht->array[index]);
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
