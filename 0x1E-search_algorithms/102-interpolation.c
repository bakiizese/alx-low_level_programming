#include "search_algos.h"
/**
 * interpolation_search - entry
 * @array: array
 * @size: size of array
 * @value: value to ne searched
 * Return: index to value
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	size_t pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
		{
			low = pos + 1;
			pos = low + (((double)(high - low) / (array[high] - array[low])) *
					(value - array[low]));
		}
		else if (array[pos] > value)
		{
			high = pos - 1;
			pos = low + (((double)(high - low) / (array[high] - array[low])) *
					(value - array[low]));
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
