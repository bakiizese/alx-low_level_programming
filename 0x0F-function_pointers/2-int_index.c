#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - entry
 * @array: arrays of numbers
 * @size: size of the array
 * @cmp: function that compair
 * Return: return index if matchs found else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
