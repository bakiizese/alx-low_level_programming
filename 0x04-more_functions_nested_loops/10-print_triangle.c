#include "main.h"
/**
 * print_triangle - entry
 * @size: size
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i <= (size - 1); i++)
		{
			for (j = 0; j <= (size - 1) - i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}


