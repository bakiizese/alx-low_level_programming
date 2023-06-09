#include "hash_tables.h"
/**
 * hash_table_print - entry
 * @ht: var
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tm;
	char *ps;
	unsigned long int j;

	if (ht == NULL)
		return;
	printf("{");
	ps = "";
	j = 0;
	while (j < ht->size)
	{
		tm = ht->array[j];
		j++;
		while (tm != NULL)
		{
			printf("%s'%s': '%s'", ps, tm->key, tm->value);
			ps = ", ";
			tm = tm->next;
		}
	}
	printf("}\n");
}
