#include "lists.h"
/**
 * free_listint2 - entry
 * @head: pointer to pointer head
 */
void free_listint2(listint_t **head)
{
	listint_t *fr;
	while (*head != NULL)
	{
		fr = (*head)->next;
		free(*head);
		*head = fr;
	}
	head = NULL;
}
