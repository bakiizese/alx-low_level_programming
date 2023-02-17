#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int chr = 96;
	int chr2 = 64;
	int i = 0;
	int j = 0;

	while (i < 26)
	{
		chr++;
		i++;

		char alpha = chr;

		putchar(alpha);
	}
	while (j < 26)
	{
		chr2++;
		j++;

		char Alpha = chr2;

		putchar(Alpha);
	}
	putchar('\n');
	return (0);
}
