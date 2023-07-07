#include "main.h"
/**
 * swap_int - entry
 * @a: var
 * @b: var
 */
void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
