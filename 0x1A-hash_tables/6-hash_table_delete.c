#include "hash_tables.h"
/**
 * hash_table_delete - entry
 * @ht: var
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tm, *tm2;
	unsigned long int j;

	if (ht == NULL)
		return;
	j = 0;
	while (j < ht->size)
	{
		tm = ht->array[j];
		while ((tm2 = tm) != NULL)
		{
			tm = tm->next;
			free(tm2->key);
			free(tm2->value);
			free(tm2);
		}
		j++;
	}
	free(ht->array);
	free(ht);
}
