#include "hash_tables.h"
/**
 * hash_table_create - entry
 * @size: var
 * Return: t
 */
shash_table_t *hash_table_create(unsigned long int size)
{
        shash_table_t *t;
        shash_node_t **ar;
        unsigned long int j;

        t = malloc(sizeof(shash_table_t));
        if (t == NULL)
                return (NULL);
        ar = malloc(sizeof(shash_node_t *) * size);
        if (ar == NULL)
                return (NULL);
        for (j = 0; j < size; j++)
                ar[j] = NULL;
        t->array = ar;
        t->size = size;
	t->shead = NULL;
	t->stail = NULL;
        return (t);
}
/**
 * add_n_shash - entry
 * @h: var
 * @key: var
 * @value: var
 * Return: tm
 */
shash_node_t *add_n_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *tm = *h;

	while (tm != NULL)
	{
		if (strcmp(key, tm->key) == 0)
		{
			free(tm->value);
			tm->value = strdup(value);
			return (tm);
		}
		tm = tm->next;
	}
	tm = malloc(sizeof(shash_node_t));
	if (tm == NULL)
		return (NULL);
	tm->key = strdup(key);
	tm->value = strdup(value);
	tm->next = *h;
	*h = tm;

	return (tm);
}
/**
 * add_i_shash - entry
 * @ht: var
 * @new: var
 */
void add_i_shash(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *tm, *tm2;
	int t;

	tm = tm = ht->shead;

	while (tm != NULL)
	{
		t = strcmp(new->key, tm->key);
		if (t == 0)
		{
			return;
		}
		else if (t < 0)
		{
			new->sprev = tm->sprev;

			if (tm->sprev)
				tm->sprev->snext = new;
			else
				ht->shead = new;

			tm->sprev = new;
			new->snext = tm;

			return;
		}
		tm = tm;
		tm = tm->snext;
	}

	new->sprev = tm2;
	new->snext = NULL;
	if (ht->shead)
		tm2->snext = new;
	else
		ht->shead = new;

	ht->stail = new;
}
/**
 * hash_table_set - entry
 * @ht: struct var
 * @key: var
 * @value: var
 * Return: 1
 */
int shash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *tm;
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
/**
 * shash_table_get - entry
 * @ht: struct pointer
 * @key: var
 * Return: indexed value
 */
char *shash_table_get(const hash_table_t *ht, const char *key)
{
        shash_node_t *tm;
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
/**
 * shash_table_print - entry
 * @ht: vat
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tm;
	char *ps;

	if (ht == NULL)
		return;

	printf("{");
	ps = "";

	tm = ht->shead;

	while (tm != NULL)
	{
		printf("%s'%s': '%s'", ps, tm->key, tm->value);
		ps = ", ";
		tm = tm->snext;
	}

	printf("}\n");
}
/**
 * shash_table_delete - deletes a shash table
 *
 * @ht: pointer to the shash table
 * Return: no return
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp1;
	shash_node_t *tmp2;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp1 = ht->array[i];
		while ((tmp2 = tmp1) != NULL)
		{
			tmp1 = tmp1->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
	}
	free(ht->array);
	free(ht);
}
