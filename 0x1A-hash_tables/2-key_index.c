#include "hash_tables.h"
/**
 * key_index - entry
 * @key: var key
 * @size: var
 * Return: 0 or hash
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
