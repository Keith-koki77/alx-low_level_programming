#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table to be added or updated the key to.
 * @key: this the key (cannot be an empty string).
 * @value: value associated with the key.
 *
 * Return: 1 on suceess and 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	int index;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	if (key == NULL || strlen(key) == 0 || ht == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	new_node = ht->array[index];

	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			free(new_node->value);
			new_node->value = strdup(value);
			return (1);
		}

		new_node = new_node->next;
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
