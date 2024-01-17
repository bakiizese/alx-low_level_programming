#include "search_algos.h"
int power(int base, int exponent);
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
	int beg = power(2, i);
	int end = power(2, (i + 1));
	int siz = size - 1;

	while (end <= siz)
	{
		end = power(2, (i + 1));
		beg = power(2, i);
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
 * power - cal pow of
 * @base: base of pow
 * @exponent: var
 * Return: Result
 */
int power(int base, int exponent)
{
	int result = 1;
	int i;

	for (i = 0; i < exponent; i++)
		result *= base;
	return (result);
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
