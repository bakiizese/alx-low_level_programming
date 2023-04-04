#include "lists.h"
#include <stdio.h>
/**
 * looped_listint_len - entry
 * @head: pointet to head
 * Return: node
 */
size_t looped_listint_len(const listint_t *head)
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
 * print_listint_safe - entry
 * @head: pointer to head
 * Return: j
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, j;

	i = 0;
	j = looped_listint_len(head);
	if (j == 0)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			j++;
		}
	}
	else
	{
		while (i < j)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (j);
}
