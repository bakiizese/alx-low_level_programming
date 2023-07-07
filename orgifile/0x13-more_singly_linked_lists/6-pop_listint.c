#include "lists.h"
/**
 * pop_listint - entry
 * @head: pointer to pointer head
 * Return: i
 */
int pop_listint(listint_t **head)
{
	listint_t *op;
	int i;

	if (*head == NULL)
		return (0);
	op = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(op);
	return (i);
}
