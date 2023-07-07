#include "main.h"
#include <string.h>
/**
 * _strcat - entry
 * @dest: var
 * @src: var
 * Return: cat
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int n = strlen(dest);
	int j = strlen(src);

	for (i = 0; i <= j; i++)
	{
		dest[n++] = src[i];
	}
	return (dest);
}
