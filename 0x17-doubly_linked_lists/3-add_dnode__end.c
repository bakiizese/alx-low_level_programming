#include "lists.h"
/**
 * add_dnodeint_end - entry
 * @head: struct var
 * @n: var
 * Return: new
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while ((*head)->next != NULL)
		*head = (*head)->next;
	(*head)->next = new;
	new->prev = *head;
	return (new);
}
