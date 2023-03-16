#include "main.h"
#include <stdlib.h>
/**
 * array_range - entry
 * @min: var
 * @max: var
 * Return: ptr
 */
int *array_range(int min, int max)
{
	int *ptr;
	int j = 0;
	int i = min;
	int k;

	if (min > max)
		return (NULL);
	while (i <= max)
	{
		i++;
		j++;
	}
	ptr = malloc(j * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (k = 0; min <= max; k++)
	{
		ptr[k] = min++;
	}
	return (ptr);
}
