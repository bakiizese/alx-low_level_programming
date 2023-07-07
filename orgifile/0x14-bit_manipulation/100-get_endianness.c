#include "main.h"
/**
 * get_endianness - entry
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int n = 1;
	char *i;

	i = (char *)&n;

	if (*i == 1)
		return (1);
	return (0);
}
