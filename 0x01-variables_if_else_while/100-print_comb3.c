#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int c;

	while (i < 10)
	{
		c = 0;

		while (c < 10)
		{
			if (i != c && i < c)
			{
				putchar(i + '0');
				putchar(c + '0');

				if (c + i != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

