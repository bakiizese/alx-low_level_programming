#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - entry
 * @b: pointer char
 * Return: sum
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (!(b[i] == '0' || b[i] == '1'))
		{
			return (0);
		}
		sum = 2 * sum + (b[i] - '0');
	}
	return (sum);
}
