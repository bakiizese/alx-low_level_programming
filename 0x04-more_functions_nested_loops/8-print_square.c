#include "main.h"
/**
 * print_square - entry
 * @size: var
 */
void print_square(int size)
{
	int i;
	int j = 0;

	if (size > 0)
	{
		while (j < size)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			j++;
		}
	}
	else
		_putchar('\n');
}
