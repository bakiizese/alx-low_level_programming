#include "lists.h"
/**
 * dlistint_len - entry
 * @h: struct var
 * Return: j
 */
size_t dlistint_len(const dlistint_t *h)
{
	int j = 0;

	if (h == NULL)
		return (0);
	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
