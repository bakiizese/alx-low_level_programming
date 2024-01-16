#include "search_algos.h"
/**
 * linear_search - entry
 * @array: the list of numbers
 * @size: length of array
 * @value: number to be searched
 * Return: -1 if fail else index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
