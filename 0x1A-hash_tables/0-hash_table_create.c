#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: The size of the array.
 * Return: a pointer to the newly created hash table
 * otherwise NULL if something went wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int j;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_table_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		ht->array[j] = NULL;
	return (ht);
}
