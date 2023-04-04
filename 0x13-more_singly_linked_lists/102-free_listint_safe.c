#include "lists.h"
#include <stdio.h>
/**
 * listint_loop2 - entry
 * @head: pointet to head
 * Return: 0 or node
 */
size_t listint_loop2(const listint_t *head)
{
	const listint_t *i, *j;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	j = (head->next)->next;
	i = head->next;
	while (j)
	{
		if (i == j)
		{
			i = head;
			while (i !=  j)
			{
				i = i->next;
				j = j->next;
				node++;
			}
			i = i->next;
			while (i != j)
			{
				i = i->next;
				node++;
			}
			return (node);
		}
		j = (j->next)->next;
		i = i->next;
	}
	return (0);
}
/**
 * free_listint_safe - entry
 * @h: pointet to pointer
 * Return: j
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *fr;
	size_t i, j;

	j = listint_loop2(*h);
	if (j == 0)
	{
		while (h != NULL && *h != NULL)
		{
			fr = (*h)->next;
			free(*h);
			*h = fr;
			j++;
		}
	}
	else
	{
		while (i < j)
		{
			fr = (*h)->next;
			free(*h);
			*h = fr;
			i++;
		}
		*h = NULL;
	}
	h = NULL;
	return (j);
}
