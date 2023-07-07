#include "main.h"
#include <stdlib.h>
/**
 * lenword - entry
 * @word: var
 * Return: len
 */
int lenword(char *word)
{
	int i = 0;
	int len = 0;

	while (*(word + i) && *(word + i) != ' ')
	{
		i++;
		len++;
	}
	return (len);
}
/**
 * count - entry
 * @cword: var
 * Return: s
 */
int count(char *cword)
{
	int i = 0;
	int len = 0;
	int s = 0;

	for (i = 0; *(cword + i); i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (*(cword + i) != ' ')
		{
			s++;
			i += lenword(cword + i);
		}
	}
	return (s);
}
/**
 * strtow - entry
 * @str: var
 * Return: st
 */
char **strtow(char *str)
{
	char **st;
	int i = 0, let, l, k, s;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	s = count(str);
	if (s == 0)
		return (NULL);
	st = malloc(sizeof(char *) * (s + 1));
	if (st == NULL)
		return (NULL);
	for (k = 0; k < s; k++)
	{
		while (str[i] == ' ')
			i++;
		let = lenword(str + i);
		st[k] = malloc(sizeof(char) * (let + 1));
		if (st[k] == NULL)
		{
			for (; k >= 0; k--)
				free(st[k]);
			free(st);
			return (NULL);
		}
		for (l = 0; l < let; l++)
			st[k][l] = str[i++];
		st[k][l] = '\0';
	}
	st[k] = NULL;
	return (st);
}
