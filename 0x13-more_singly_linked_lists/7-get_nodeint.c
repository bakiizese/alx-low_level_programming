#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	int count = 0;

	while(head)
	{
		node = *head;
		if (count == 5)
			return (node->n);
		*head = (*head)->next;
		count++;
	}
	return (0);
}
