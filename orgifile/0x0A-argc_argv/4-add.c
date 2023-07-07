#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * number - proto
 * @n: var
 * Return: 1 or 0
 */
int number(char *n)
{
	unsigned int i = 0;

	while (i < strlen(n))
	{
		if (!isdigit(n[i]))
			return (0);
		i++;
	}
	return (1);
}
/**
 * main - entry
 * @argc: var
 * @argv: var
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int m = 0;
	int i = 1;
	int j;

	while (i < argc)
	{
		if (number(argv[i]))
		{
			j = atoi(argv[i]);
			m = m + j;
		}
		else
		{
			printf("Error\n");
			return (0);
		}
		i++;
	}
	printf("%d\n", m);
	return (0);
}
