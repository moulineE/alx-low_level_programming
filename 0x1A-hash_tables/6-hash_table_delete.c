#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: a pointer to the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *temp;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				temp = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
