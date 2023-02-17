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
				putchar('0' + i);
				putchar('0' + c);

				if (c + i != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			i++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}

