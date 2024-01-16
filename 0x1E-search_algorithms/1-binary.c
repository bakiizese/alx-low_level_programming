#include "search_algos.h"
/**
 * binary_search - entry
 * @array: list of elements
 * @size: size of the list
 * @value: value to be searche
 * Return: index at the value or -1 if NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t end = size - 1;
	size_t beg = 0;
	size_t mid;
	size_t i;

	mid = (beg + end) / 2;
	while (end >= beg)
	{
		printf("Searching in array: ");
		for (i = beg; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
		{
			end = mid - 1;
			mid = (beg + end) / 2;
		}
		else if (array[mid] < value)
		{
			beg = mid + 1;
			mid = (beg + end) / 2;
		}
		else
			return (-1);
	}
	return (-1);
}
