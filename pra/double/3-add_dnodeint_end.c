#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return NULL;

	new->n = n;
	new->prev = *head;
	new->next = NULL;

	if (*head != NULL)
		(*head)->next = new;
	*head = new;
	printf(" %d ", (*head)->n);
	return new;
}
