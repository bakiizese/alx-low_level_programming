#include "main.h"
#include <string.h>
/**
 * puts_half - entry
 * @str: var
 */
void puts_half(char *str)
{
	int i, j;
	int st = strlen(str);

	if (st % 2 == 0)
	{
		i = st / 2;
		for ( ; st != '\0'; i++)
		{
			j = str[i];
			_putchar(j);
		}
		_putchar('\n');
	}
	else if (st % 2 != 0)
	{
		i = (st - 1) / 2;
		for ( ; i < st - 1;)
		{
			_putchar(str[i+1]);
		}
		_putchar('\n');
	}
}
