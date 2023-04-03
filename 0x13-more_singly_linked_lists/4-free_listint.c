#include "lists.h"
/**
 * free_listint - entry
 * @head: pointer head
 */
void free_listint(listint_t *head)
{
	listint_t *fr;

	while (head != NULL)
	{
		fr = head->next;
		free(head);
		head = fr;
	}
}
