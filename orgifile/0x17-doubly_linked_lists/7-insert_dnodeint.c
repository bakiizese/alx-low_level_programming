#include "lists.h"
/**
 * insert_dnodeint_at_index - entry
 * @h: struct var
 * @idx: index
 * @n: var
 * Return: new
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head, *new = NULL;
	unsigned int count;

	if (idx != 0)
	{
		head = *h;
		count = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		for ( ; head != NULL; count++)
		{
			if (count == idx)
			{
				if (head->next != NULL)
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				else
					new = add_dnodeint_end(h, n);
				break;
			}
			head = head->next;
		}
	}
	else
		new = add_dnodeint(h, n);
	if (new == NULL)
		return (NULL);
	return (new);
}
