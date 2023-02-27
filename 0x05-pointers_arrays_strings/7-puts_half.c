#include "main.h"
#include <string.h>
/**
 * puts_half - entry
 * @str: var
 */
void puts_half(char *str)
{
	int i, n;
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
