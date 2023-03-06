#include "main.h"
/**
 * _memcpy - entry
 * @dest: var
 * @src: var
 * @n: var
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *des = dest;
	const char *sor = src;

	for (i = 0; i < n; i++)
		des[i] = sor[i];
	return (dest);
}
