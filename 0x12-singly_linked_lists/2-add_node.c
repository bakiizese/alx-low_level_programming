#include "lists.h"
#include <stdlib.h>
/**
 * add_node - entry
 * @head: pointer to pointer
 * @str: var string
 * Return: pointer head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	size_t i;

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
