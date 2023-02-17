#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c = 0;

	while (c < 10)
	{
		b = 0;
		while (b < 10)
		{
			a = 0;
			while (a < 10)
			{
				if (a != b && b != c && c < b && b < a)
				{
					putchar(c + '0');
					putchar(b + '0');
					putchar(a + '0');

					if (a + b + c != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				a++;
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
