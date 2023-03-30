#include "lists.h"
#include <stdlib.h>
/**
 * add_node_end - entry
 * @head: pointer to pointer
 * @str: string
 * Return: head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newend = malloc(sizeof(list_t));
	list_t *now;
	size_t i;

	if (newend == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	newend->len = i;
	newend->str = strdup(str);
	newend->next = NULL;
	now = *head;
	if (now == NULL)
		*head = newend;
	else
	{
		while (now->next != NULL)
			now = now->next;
		now->next = newend;
	}
	return (*head);
}
