#include "lists.h"
/**
 * find_listint_loop - entry
 * @head: pointer to head
 * Return: i or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i, *j;

	i = head->next;
	j = (head->next)->next;
	if (head == NULL || head->next == NULL)
		return (NULL);
	while (j)
	{
		if (i == j)
		{
			i = head;
			while (i != j)
			{
				i = i->next;
				j = j->next;
			}
			return (i);
		}
		i = i->next;
		j = (j->next)->next;
	}
	return (NULL);
}
