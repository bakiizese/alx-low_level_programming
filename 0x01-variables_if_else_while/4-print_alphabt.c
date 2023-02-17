#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
		if (chr == 'q' || chr == 'e')
		{
			continue;
		}
		putchar(chr);
		chr++;
	}
	putchar('\n');
	return (0);
}
