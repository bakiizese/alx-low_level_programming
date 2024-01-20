#include "search_algos.h"
#include <math.h>
listint_t *lin(listint_t *mid, size_t end, int value);
/**
 * jump_list - entry
 * @list: pointer to list
 * @size: size of list
 * @value: value to be searched
 * Return: NULL or pointer to value
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t sq = sqrt(size);
	size_t j = 0;
	listint_t *mid = list, *tmp, *beg = list;
	size_t end = size - 1;


	if (list == NULL || size == 0)
		return (NULL);

	if (list->n == value)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", beg->index, list->index);
		return (lin(mid, end, value));
	}
	while (mid->index != sq)
		mid = mid->next;


	while (j < end)
	{
		printf("Value checked at index [%ld] = [%d]\n", mid->index, mid->n);

		if (mid->n < value)
		{
			beg = mid;
			j = mid->index;
			tmp = mid;
			while (mid->index < (j + sq))
			{
				if (mid->next != NULL)
					mid = mid->next;
				else if (mid->next == NULL)
				{
					printf("Value checked at index [%ld] = [%d]\n", end, mid->n);
					mid = tmp;
					printf("Value found between indexes [%ld] and [%ld]\n", beg->index, end);
					return (lin(mid, end, value));
				}
			}
		}
		else if (mid->n > value)
		{
			end = mid->index;
			printf("Value found between indexes [%ld] and [%ld]\n", beg->index, end);
			return (lin(beg, end, value));
		}
		else
			mid = mid->next;
	}
	return (lin(mid, end, value));
}
/**
 * lin - entry
 * @mid: pointer to jump
 * @end: end of list
 * @value: value to be found
 * Return: null or pointer to value
 */
listint_t *lin(listint_t *mid, size_t end, int value)
{
	while (mid->index <= end)
	{

		printf("Value checked at index [%ld] = [%d]\n", mid->index, mid->n);

		if (mid->n == value)
		{
			return (mid);
		}
		else if (mid->next == NULL)
			return (NULL);
		mid = mid->next;
	}
	return (NULL);
}
