#include "main.h"
/**
 * _strlen_recursion - entry
 * @s: var
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
