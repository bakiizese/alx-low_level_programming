#include "main.h"
#include <string.h>
/**
 * puts_half - entry
 * @str: var
 */
void puts_half(char *str)
{
	int i, j = 0;
	int st;

	while(str[j] != '\0')
		j++;

	if (j % 2 == 0)
	{
		i = j / 2;
		for ( ; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (j % 2 != 0)
	{
		st = (j - 1) / 2;
		for ( ; st < j - 1; i++)
		{
			_putchar(str[st + 1]);
		}
	}
	_putchar('\n');
}
