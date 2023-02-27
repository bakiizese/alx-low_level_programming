#include "main.h"
#include <string.h>
/**
 * print_rev - entry
 * @s: var
 */
void print_rev(char *s)
{
	int i;
	int j;
	int st = strlen(s);

	for (i = st; i >= 0; i--)
	{
		j = s[i];
		_putchar(j);
	}
	_putchar('\n');
}
