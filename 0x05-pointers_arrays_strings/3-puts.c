#include "main.h"
#include <string.h>
/**
 * _puts - entry
 * @str: var
 */
void _puts(char *str)
{
	int i;
	int j;
	int st = strlen(str);

	for (i = 0; i <= st; i++)
	{
		j = str[i];
		_putchar(j);
	}
	_putchar('\n');
}
