#include "lists.h"
/**
 * get_dnodeint_at_index - entry
 * @head: struct var
 * @index: index at
 * Return: cur
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);
	while (head->prev !=  NULL)
		head = head->prev;
	for (count = 0; head != NULL; count++)
	{
		if (count == index)
			return (head);
		head = head->next;
	}
	return (head);
}
