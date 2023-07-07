#include "main.h"
/**
 * _islower - lowercase check
 * @c: chacked charachter
 * Return: 0 for upper case 1 for lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

