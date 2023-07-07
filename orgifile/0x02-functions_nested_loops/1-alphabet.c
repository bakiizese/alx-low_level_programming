#include "main.h"
/**
 * print_alphabet - void
 * return: 0
 */
void print_alphabet(void)
{
	char chr = 'a';

	for ( ; chr <= 'z'; chr++)
	{
		_putchar(chr);
	}
	_putchar('\n');
}
