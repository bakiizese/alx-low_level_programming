#include "lists.h"
/**
 * delete_dnodeint_at_index - entry
 * @head: var struct
 * @index: index var
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head2, *head1 = *head;
	unsigned int count;

	if (head1 != NULL)
		while (head1->prev != NULL)
			head1 = head1->prev;
	for (count = 0; head1 != NULL; count++)
	{
		if (count == index)
		{
			if (count == 0)
			{
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head2->next = head1->next;
				if (head1->next != NULL)
					head1->next->prev = head2;
			}
			free(head1);
			return (1);
		}
		head2 = head1;
		head1 = head1->next;
	}
	return (-1);
}
