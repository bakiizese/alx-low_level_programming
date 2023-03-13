#include "main.h"
#include <stdlib.h>
/**
 * count - entry
 * @i: var
 * Return: j
 */
int count(char *i)
{
	int j = 0;

	while (i[j] != '\0')
	{
		j++;
	}
	return (j);
}
/**
 * _strdup - entry
 * @str: var
 * Return: ptr
 */
char *_strdup(char *str)
{
	int c = count(str);
	char *ptr = (char *)malloc(c * sizeof(char));
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; i < c; i++)
	{
		*(ptr + i) = str[i];
	}
	return (ptr);
}
