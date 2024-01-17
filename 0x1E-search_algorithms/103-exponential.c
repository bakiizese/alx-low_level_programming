#include "search_algos.h"
#include <math.h>
int b_search(int *array, int be, int en, int value);
/**
 * exponential_search - entry
 * @array: array
 * @size: size of array
 * @value: value to be searched
 * Return: -1 or index of value
 */
int exponential_search(int *array, size_t size, int value)
{
	int i = 0;
	int beg = pow(2, i);
	int end = pow(2, (i + 1));
	int siz = size - 1;

	while (end <= siz)
	{
		end = pow(2, (i + 1));
		beg = pow(2, i);
		printf("Value checked array[%d] = [%d]\n", beg, array[beg]);
		if (value <= array[end] && value >= array[beg])
		{
			printf("Value found between indexes [%d] and [%d]\n", beg, end);
			return (b_search(array, beg, end, value));
		}
		i++;
	}
	printf("Value found between indexes [%d] and [%d]\n", beg, (end - 1));
	return (b_search(array, beg, end - 1, value));
}
/**
 * b_search - entry
 * @array: array
 * @be: beg od array
 * @en: end of array
 * @value: value to be searched
 * Return: -1 or index
 */
int b_search(int *array, int be, int en, int value)
{
	size_t end = en;
	size_t beg = be;
	size_t mid;
	size_t i;

	if (array == NULL)
	return (-1);

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
