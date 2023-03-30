#include "lists.h"
#include <stdlib.h>
/**
 * free_list - entry
 * @head: pointer struct
 */
void free_list(list_t *head)
{
	list_t *now;

	while ((now = head) != NULL)
	{
		head = head->next;
		free(now->str);
		free(now);
	}
}
