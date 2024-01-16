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
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
		(value - array[low]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
