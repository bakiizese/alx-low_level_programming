#include "hash_tables.h"
/**
 * hash_table_create - entry
 * @size: var
 * Return: t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t;
	hash_node_t **ar;
	unsigned long int j;

	t = malloc(sizeof(hash_table_t));
	if (t == NULL)
		return (NULL);
	ar = malloc(sizeof(hash_node_t *) * size);
	if (ar == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		ar[j] = NULL;
	t->array = ar;
	t->size = size;
	return (t);
}
