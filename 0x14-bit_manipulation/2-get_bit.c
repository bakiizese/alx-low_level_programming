#include "main.h"
/**
 * get_bit - entry
 * @n: var
 * @index: var
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index  < 64 && n == 0)
		return (0);
	for (; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}
	return (-1);
}
