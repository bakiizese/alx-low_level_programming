#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char chr = 'a';

		for ( ; chr <= 'z'; chr++)
		{
			_putchar(chr);
		}
		_putchar('\n');
		count++;
	}
}
