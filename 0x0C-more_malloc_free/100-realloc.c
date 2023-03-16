#include "main.h"
#include <stdlib.h>
/**
 * _realloc - entry
 * @ptr: var
 * @old_size: var
 * @new_size: var
 * Return: nptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr, *ptr2;
	unsigned int i;

	if (ptr != NULL)
		ptr2 = ptr;
	else
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(nptr + 1) = ptr2[i];
	}
	free(ptr);
	return (nptr);
}
