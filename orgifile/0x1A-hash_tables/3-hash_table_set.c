#include "hash_tables.h"
/**
 * hash_table_set - entry
 * @ht: struct var
 * @key: var
 * @value: var
 * Return: 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *tm;
	unsigned long int index = 0;

	new = NULL;
	tm = NULL;
	if (!ht || !(*key) || !key || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	tm = ht->array[index];

	while (tm && strcmp(tm->key, key) != 0)
		tm = tm->next;
	if (tm)
	{
		free(tm->value);
		tm->value = strdup(value);
		return (1);
	}
	new = malloc(sizeof(*new));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
