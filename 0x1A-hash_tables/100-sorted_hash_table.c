#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *t = malloc(sizeof(shash_table_t));
	shash_node_t **ar;
	unsigned long int j;

	if (t == NULL)
		return (NULL);

	ar = malloc(sizeof(shash_node_t *) * size);
	if (ar == NULL)
		return (NULL);

	j = 0;
	while (j < size)
	{
		ar[j] = NULL;
		j++;
	}

	t->array = ar;
	t->size = size;
	t->shead = NULL;
	t->stail = NULL;

	return (t);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *tm = *h;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(shash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *h;
	*h = tm;
	return (tm);
}

shash_node_t *add_n_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *tmp;

	tmp = *h;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(shash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *h;

	*h = tmp;

	return (tmp);
}

