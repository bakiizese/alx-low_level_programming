#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_times_table - times table
 * @n: var
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(0 + '0');
			for (j = 1; j <= n; j++)
			{
				int k = j * i;

				if (j == 0)
					_putchar(k + '0');
				else if (k < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if (k < 100 && k >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(k / 100 + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
