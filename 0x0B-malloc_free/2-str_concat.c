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
 * str_concat - entry
 * @s1: var
 * @s2: var
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
	int c1;
	int c2;
	int i, j;
	char *ptr;

	if (s2 == NULL)
		return ("");
	c1 = count(s1) + 1;
	c2 = count(s2) + 1;
	ptr = (char *)malloc((c1 + c2) * sizeof(char));
	for (i = 0; s1[i] != '\0'; i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	for (j = 0; j < c2; j++)
	{
		*(ptr + i) = *(s2 + j);
		i++;
	}
	if (ptr == 0)
		return (NULL);
	return (ptr);
}
