#include "lists.h"
#include <stdlib.h>
/**
 * free_list - entry
 * @head: pointer struct
 */
void free_list(list_t *head)
{
	list_t *now;

	now = head;
	if (now == NULL)
	{
		head = head->next;
		free(now);
	}
}
