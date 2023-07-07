#include "main.h"
#include <string.h>
/**
 * _strncat - entru
 * @dest: var
 * @src: var
 * @n: var
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);
	int j = strlen(src);
	int a;
	int b = 0;

	for (a = 0; a < n; a++)
	{
		if (n > j)
			dest[i++] = src[b++];
		else
			dest[i++] = src[a];
	}
	return (dest);
}
