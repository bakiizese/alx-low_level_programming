#include "search_algos.h"
#include <math.h>

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t mid = sqrt(size);
	listint_t *tmp = list;

	if (list == NULL)
		return (NULL);
	
	for (; list->index < size - 1;)
	{
		if (list->index == mid && value != 0)
		{
			tmp = list;
		}
		list = list->next;
	}
	if (tmp->n == value)
		return (tmp);
	return (NULL);
}
