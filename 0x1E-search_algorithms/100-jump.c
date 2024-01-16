#include "search_algos.h"
#include <math.h>
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
	size_t val;

	if (array == NULL)
		return (-1);
	if (array[mid] == value)
		return (mid);
	while (end >= beg)
	{
		printf("Value checked array[%ld] = [%d]\n", beg, array[beg]);
		if (array[mid] < value)
		{
			beg = mid;
			mid += m;
		}
		else if (array[mid] >= value)
		{
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
		}
	}
	return (-1);
}
