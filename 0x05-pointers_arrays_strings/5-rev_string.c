#include "main.h"
#include <string.h>
/**
 * rev_string - entry
 * @s: var
 */
void rev_string(char *s)
{
	int i, j;
	int n = strlen(s);

	for (i = n; i >= 0; i++)
	{
		j = s[n];
		_putchar(j);
	}
}
