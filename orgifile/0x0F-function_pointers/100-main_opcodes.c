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

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx\n", *((char *)main + i));
		if (i < bytes - 1)
		{
			printf(" ");
		}
		else
			printf("\n");
	}
	return (0);
}
