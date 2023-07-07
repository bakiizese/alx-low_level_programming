#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int b = 0;
	int b_c;
	int k_c;

	int b2;
	int b_c2;
	int k_c2;

	while (b <= 98)
	{
		b_c = (b / 10 + '0');
		k_c = (b % 10 + '0');
		b2 = 0;

		while (b2 <= 99)
		{
			b_c2 = (b2 / 10 + '0');
			k_c2 = (b2 % 10 + '0');

			if (b < b2)
			{
				putchar(b_c);
				putchar(k_c);
				putchar(' ');
				putchar(b_c2);
				putchar(k_c2);

				if (b != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b2++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}

