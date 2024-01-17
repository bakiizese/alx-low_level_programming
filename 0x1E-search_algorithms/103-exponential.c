#include "search_algos.h"
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
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i *= 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	if (i < size)
		right = i;
	else
		right = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (b_search(array, i / 2, right, value));
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
