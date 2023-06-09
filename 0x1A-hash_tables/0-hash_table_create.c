#include "hash_tables.h"

/**
 * hash_tables_create - function that creates the hash tables.
 * @size: the size of the array.
 *
 * Return: NULL if an error occurs else,
 * return pointer to the new node.
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *ht;

	if (size < 1)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}
