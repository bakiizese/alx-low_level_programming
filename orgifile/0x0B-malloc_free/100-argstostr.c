#include "main.h"
#include <stdlib.h>
/**
 * argstostr - entry
 * @ac: var
 * @av: var
 * Return: i
 */
char *argstostr(int ac, char **av)
{
	char *i;
	int count = 0, j = 0, k = 0, a = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (j < ac)
	{
		k = 0;
		while (av[j][k] != '\0')
		{
			count++;
			k++;
		}
		j++;
	}
	count = count + ac + 1;
	i = (char *)malloc(count * sizeof(char));
	if (i == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			i[a] = av[j][k];
			a++;
		}
		i[a] = '\n';
		a++;
	}
	return (i);
}
