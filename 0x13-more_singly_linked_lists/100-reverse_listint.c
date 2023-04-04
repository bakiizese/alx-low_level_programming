#include "lists.h"
/**
 * reverse_listint - entry
 * @head: pointer to pointer to head
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *fore, *after;

	after = NULL;
	if (head == NULL || *head == NULL)
		return (NULL);
	while ((*head)->next != NULL)
	{
		fore = (*head)->next;
		(*head)->next = after;
		after = *head;
		*head = fore;
	}
	(*head)->next = after;

	return (*head);
}
