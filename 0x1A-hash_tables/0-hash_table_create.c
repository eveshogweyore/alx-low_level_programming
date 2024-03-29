#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 *
 * Return: On success, pointer to the newly created hash table.
 * Otherwise, NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	/* Create new hash table */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * ht->size);

	return (ht);
}
