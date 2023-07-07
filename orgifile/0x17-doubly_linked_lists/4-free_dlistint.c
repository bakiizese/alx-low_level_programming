#include "lists.h"
/**
 * free_dlistint - entry
 * @head: struct var
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
