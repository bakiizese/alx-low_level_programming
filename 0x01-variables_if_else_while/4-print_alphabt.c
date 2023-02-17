#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int chr = 96;

	for (int i = 0; i < 26; i++)
	{
		chr++;

		char alpha = chr;

		if (alpha == 'q' || alpha == 'e')
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
