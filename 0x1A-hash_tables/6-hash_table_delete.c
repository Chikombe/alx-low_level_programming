#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: The hash table to delete.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *first = ht;
	hash_node_t *node, *temp;
	unsigned long int j;

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			node = ht->array[j];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(first->array);
	free(first);
}
