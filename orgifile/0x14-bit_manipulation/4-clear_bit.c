#include "main.h"
/**
 * clear_bit - entry
 * @n: var
 * @index: var
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
