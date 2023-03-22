#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry
 * @argc: var
 * @argv: var
 * Return: arg
 */
int main(int argc, char *argv[])
{
	int bytes;
	int i;
	char *arg;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arg = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arg[i]);
			break;
		}
		printf("%02hhx\n", arg[i]);
	}
	return (0);
}
