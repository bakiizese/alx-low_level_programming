#include "main.h"
#include <string.h>
/**
 * leet - entry
 * @str: var
 * Return: str
 */
char *leet(char *str)
{
	int i = 0, j;
	char let[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == let[j] || str[i] - 32 == let[j])
				str[i] = j + '0';
		}
		i++;
	}
	return (str);
}
