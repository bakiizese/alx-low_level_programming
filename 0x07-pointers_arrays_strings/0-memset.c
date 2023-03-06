#include "main.h"
/**
 * _memset - entry
 * @s: var
 * @b: var
 * @n: var
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i  = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
