#include "search_algos.h"
#include <math.h>
int loop(int *array, size_t beg, size_t end, int value, size_t mid);
/**
 * jump_search - entry
 * @array: array
 * @size: num of array
 * @value: num to be searched
 * Return: index of value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m = sqrt(size);
	size_t beg = 0;
	size_t end = size - 1;
	size_t mid = m;
	size_t i;

	if (array == NULL)
		return (-1);
	if (array[mid] == value)
		return (mid);
	while (end >= beg)
	{
		printf("Value checked array[%ld] = [%d]\n", beg, array[beg]);
		i = mid;
		if (array[mid] < value)
		{
			beg = mid;
			mid += m;
			if (i > end)
			{
				printf("Value found between indexes [%ld] and [%ld]\n", end, i);
				printf("Value checked array[%ld] = [%d]\n", end, array[end]);
				return (-1);
			}
		}
		else if (array[mid] >= value)
		{
			return (loop(array, beg, end, value, mid));
		}
	}
	return (-1);
}
/**
 * loop - entry
 * @array: array
 * @beg: beg of array
 * @end: end of array
 * @value: value to be searched
 * @mid: jumper
 * Return: -1 or index to value
 */
int loop(int *array, size_t beg, size_t end, int value, size_t mid)
{
	size_t val;

	end = mid;
	printf("Value found between indexes [%ld] and [%ld]\n", beg, end);
	val = beg;
	for (; beg <= end; beg++)
	{
		if (array[beg] == value)
		{
			for (; val <= beg; val++)
				printf("Value checked array [%ld] = [%d]\n", val, array[val]);
			return (beg);
		}
	}
	return (-1);
}
