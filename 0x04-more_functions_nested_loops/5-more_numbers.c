#include "main.h"
/**
 * more_numbers - entry
 */
void more_numbers(void)
{
	int j = 0;

	while (j <= 10)
	{
		int i;

		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		j++;
		_putchar('\n');
	}
	_putchar('\n');
}
