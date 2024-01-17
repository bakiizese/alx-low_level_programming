#include "search_algos.h"
#include <math.h>
int ret(int *array, size_t end, size_t i);
/**
 * jump_search - entry
 * @array: array
 * @size: num of array
 * @value: num to be searched
 * Return: index of value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m = (int)sqrt((double)size);
	size_t beg = 0;
	size_t end = size - 1;
	size_t mid = m;
	size_t val, i;

	if (array == NULL || size == 0)
		return (-1);

	while (end >= beg)
	{
		printf("Value checked array[%ld] = [%d]\n", beg, array[beg]);
		i = mid;
		if (array[beg] == value)
			return (beg);
		if (array[mid] < value)
		{
			beg = mid;
			mid += m;
			if (i > end)
				return (ret(array, end, i));
		}
		else if (array[mid] >= value)
		{
			end = mid;
			printf("Value found between indexes [%ld] and [%ld]\n", beg, end);
			if (value < 0)
			{
				for (; beg <= end; beg++)
				{
					printf("Value checked array[%ld] = [%d]\n", beg, array[beg]);
				}
				return (-1);
			}
			val = beg;
			for (; beg <= end; beg++)
			{
				if (array[beg] == value)
				{
					for (; val <= beg; val++)
						printf("Value checked array[%ld] = [%d]\n", val, array[val]);
					return (beg);
				}
			}
		}
	}
	return (-1);
}
/**
 * ret - entry
 * @array: array
 * @end: end of array index
 * @i: mid of array
 * Return: -1
 */
int ret(int *array, size_t end, size_t i)
{
	printf("Value found between indexes [%ld] and [%ld]\n", end, i);
	printf("Value checked array[%ld] = [%d]\n", end, array[end]);
	return (-1);
}
