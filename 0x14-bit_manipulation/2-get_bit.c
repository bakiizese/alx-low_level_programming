#include "main.h"
/**
 * get_bit - entry
 * @n: var
 * @index: var
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 0))
		return (1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
