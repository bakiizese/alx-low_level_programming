#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - entry
 * @array: an array of numbers
 * @size: size of an array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
