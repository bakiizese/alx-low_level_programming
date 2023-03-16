#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - entry
 * @b: var
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b + 1);
	if (ptr == NULL)
		exit (98);
	return (ptr);
}
