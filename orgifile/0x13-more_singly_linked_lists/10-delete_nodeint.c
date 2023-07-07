#include "lists.h"
/**
 * delete_nodeint_at_index - entry
 * @head: pointer to head
 * @index: index
 * Return: 1 or 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pos, *del;
	unsigned int i = 0;

	del = *head;
	if (del == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		return (1);
	}
	while (i < index - 1)
	{
		if (del->next == NULL)
			return (-1);
		del = del->next;
		i++;
	}
	pos = del->next;
	del->next = pos->next;
	free(pos);
	return (1);
}
