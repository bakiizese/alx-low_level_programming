#include "search_algos.h"
#include <math.h>

int binary(int *array, int b, int value, int d);
int binary_search(int *array, size_t size, int value)
{

	return (binary(array, 0, value, size - 1));
}





int binary(int *array, int b, int value, int d)
{
	int j;

	if (d >= b)
	{
		j = (b + d) / 2;
		if (array[j] == value)
			return (j+1);
		else if (array[j] < value)
		{
			return (binary(array, j + 1, value, d));
		}
		else
			return (binary(array, j - 1, value, d));
	}

	return (-1);
}
