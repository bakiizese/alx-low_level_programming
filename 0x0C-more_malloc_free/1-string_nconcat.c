#include "main.h"
#include <stdlib.h>
/**
 * strl - entry
 * @str: var
 * Return: i
 */
unsigned int strl(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * string_nconcat - entry
 * @s1: var
 * @s2: var
 * @n: var
 * Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	if (n >= strl(s2))
		n = strl(s2);
	ptr = malloc((strl(s1) + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (0);
	for (i = 0; i < strl(s1); i++)
		ptr[i] = s1[i];
	for (; i < (strl(s1) + n); i++)
		ptr[i] = s2[i - strl(s1)];
	ptr[i] = '\0';
	return (ptr);
}
