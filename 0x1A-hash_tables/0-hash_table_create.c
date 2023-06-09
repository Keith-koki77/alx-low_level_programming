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

	hash_table_t *hasht;
	unsigned long int i;

	hasht = malloc(sizeof(hash_table_t));

	if (hasht == NULL)
	{
		return (NULL);
	}

	hasht->size = size;
	hasht->array = malloc(sizeof(hash_node_t) * size);

	if (hasht->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hasht->array[i] = NULL;

	return (hasht);
}
