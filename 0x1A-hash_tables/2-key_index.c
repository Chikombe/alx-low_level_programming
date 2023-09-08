#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: key to get index of.
 * @size: The array size of the hash table.
 * Return: The index at which the key/value pair should be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
