#include "main.h"
/**
 * _isdigit - entry
 * @c: var
 * Return: 1 if c is  from 0 to 9 else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 59)
		return (1);
	else
		return (0);
}
