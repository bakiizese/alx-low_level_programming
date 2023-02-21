#include "main.h"
/**
 * print_alphabet_x10(void)
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 9)
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
