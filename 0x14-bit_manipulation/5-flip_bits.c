#include "main.h"
/**
 * flip-bits - entry
 * @n: var
 * @m: var
 * Return: bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			bit++;
		m >>= 1;
		n >>= 1;
	}
	return (bit);
}
