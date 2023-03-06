#include "main.h"
/**
 * _strspn - entry
 * @s: var
 * @accept: var
 * Return: byte
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int byte = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				byte++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (byte);
		}
		s++;
	}
	return (byte);
}
