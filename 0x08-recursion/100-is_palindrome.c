#include "main.h"
/**
 * p - entry
 * @s: var
 * @i: var
 * Return: p
 */
int p(char *s, int i)
{
	if (i < 1)
	{
		return (1);
	}
	if (*s == *(s + i))
	{
		return (p(s + 1, i - 2));
	}
	return (0);
}
/**
 * str - entry
 * @s: var
 * Return: str
 */
int str(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + str(++s));
}
/**
 * is_palindrome - entry
 * @s: var
 * Return: pali
 */
int is_palindrome(char *s)
{
	int len = str(s);

	return (p(s, len - 1));
}
