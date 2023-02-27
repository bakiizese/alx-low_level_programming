#include "main.h"
#include <string.h>
/**
 * puts2 - entry
 * @str: var
 */
void puts2(char *str)
{
	int i, j;
	int st = strlen(str);

	for (i = 0; i <= st - 1; i++)
	{
		j = str[i];
		if (i % 2 == 0)
			_putchar(j);
		else
			continue;
	}
	_putchar('\n');
}
