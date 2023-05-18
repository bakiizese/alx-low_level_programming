#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - entry
 * @h: var
 * Return: j
 */
size_t print_dlistint(const dlistint_t *h)
{
	int j = 0;

	if (h == NULL)
		return (j);

	while (h->prev != NULL)
		h = h->prev;
	for ( ; h != NULL; j++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (j);
}
