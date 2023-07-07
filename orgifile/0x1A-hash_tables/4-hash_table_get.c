#include "hash_tables.h"
/**
 * hash_table_get - entry
 * @ht: struct pointer
 * @key: var
 * Return: indexed value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tm;
	unsigned long int index;

	if (key == NULL || *key == '\0')
		return (NULL);
	if (ht == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	tm = ht->array[index];
	while (tm != NULL)
	{
		if (strcmp(tm->key, key) == 0)
			return (tm->value);
		tm = tm->next;
	}
	return (NULL);
}
