#include "hash_tables.h"

/**
 * key_index - finds index where the key elements are stored.
 * @key: key to get index.
 * @size: size of the array to hash table.
 *
 * Return: index of array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
