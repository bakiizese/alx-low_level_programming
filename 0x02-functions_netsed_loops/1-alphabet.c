#include "stdio.h"
/**
 * main - Entry
 * Return: 0
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return(0);
}
/**
 * print_alphabet - void
 */
void print_alphabet(void)
{
	char chr = 'a';

	for ( ; chr <= 'z'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');
}
