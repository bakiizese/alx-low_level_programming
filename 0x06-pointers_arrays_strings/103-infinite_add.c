#include "main.h"
char *add_strings(char *n1, char *n2, char  *r, int r_size);

/**
 * infinite_add - entry
 * @n1: var
 * @n2: var
 * @r: var
 * @size_r: var
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int ln1 = 0;
	int ln2 = 0;

	for (i = 0; *(n1 + 1); i++)
		ln1++;
	for (i = 0; *(n2 + i); i++)
		ln2++;
	if (size_r <= ln1 + 1 || size_r <= ln2 + 1)
		return (0);
	n1 += ln1 - 1;
	n2 += ln2 - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
