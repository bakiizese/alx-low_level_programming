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

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		count = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (count == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);
				else
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
				break;
			}
			head = head->next;
			count++;
		}
	}
	return (new);
}
