#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry
 * @argc: var
 * @argv: var
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int loc = 0;
	int chag = 0;
	int totl = 0;
	int f = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	totl = atoi(argv[1]);

	if (totl <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coin[loc] != '\0')
	{
		if (totl >= coin[loc])
		{
			f = (totl / coin[loc]);
			chag += f;
			totl -= coin[loc] * f;
		}
		loc++;
	}
	printf("%d\n", chag);
	return (0);
}
