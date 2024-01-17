#include "search_algos.h"
int rec_bin(int *array, int beg, int end, int mid, int value);
/**
 * advanced_binary - entry search algo
 * @array: the array
 * @size: size of array
 * @value: value to be searched
 * Return: -1 or value index
 */
int advanced_binary(int *array, size_t size, int value)
{
	int beg = 0;
	int end = size - 1;
	int mid = 0;

	if (array == NULL)
		return (-1);
	return (rec_bin(array, beg, end, mid, value));
}
/**
 * rec_bin - recursion func
 * @array: the array
 * @beg: beg of array
 * @mid: mid of array
 * @end: end of array
 * @value: value to be searched
 * Return: -1 or value index
 */
int rec_bin(int *array, int beg, int end, int mid, int value)
{
	int vl = beg;

	mid = (beg + end) / 2;
	if (end < beg)
		return (-1);
	printf("Searching in array: ");
	for (; vl <= end; vl++)
	{
		printf("%d", array[vl]);
		if (vl >= end)
			continue;
		printf(", ");
	}
	printf("\n");
	if (array[mid] == value)
	{
		if (array[mid - 1] == value)
			end = mid;
		else
			return (mid);
	}
	else if (value < array[mid])
		end = mid - 1;
	else if (value > array[mid])
		beg = mid + 1;
	else
		return (-1);
	return (rec_bin(array, beg, end, mid, value));
}
