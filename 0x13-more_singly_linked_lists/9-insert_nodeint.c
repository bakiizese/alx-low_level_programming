#include "lists.h"
/**
 * insert_nodeint_at_index - entry
 * @head: pointer to head
 * @idx: index
 * @n: var
 * Return: new
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *end;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	end = *head;
	if (idx == 0)
	{
		new->next = end;
		*head = new;
		return (new);
	}
	while (count < idx - 1)
	{
		if (end == NULL || end->next == NULL)
			return (NULL);
		end = end->next;
		count++;
	}
	new->n = n;
	new->next = end->next;
	end->next = new;

	return (new);
}
