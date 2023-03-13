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
 * _strcpy - entry
 * @ptr: var
 * @str: var
 * Return: ptr
 */
char *_strcpy(char *ptr, char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/**
 * _strdup - entry
 * @str: var
 * Return: ptr
 */
char *_strdup(char *str)
{
	unsigned int c;
	char *ptr;

	if (str == 0)
		return (NULL);
	c = count(str) + 1;
	ptr = (char *)malloc(c * sizeof(char));
	if (ptr == 0)
		return (NULL);
	_strcpy(ptr, str);
	return (ptr);
}
