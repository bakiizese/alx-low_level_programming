#include "3-calc.h"
#include <stdio.h>
/**
 * main - entry
 * @argc: var
 * @argv: var
 * Return: result
 */
int main(int argc, char *argv[])
{
	int i, j;
	int result;
	int (*func)(int, int);
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];

	if ((op == '/' || op == '%') && j == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(i, j);

	printf("%d\n", result);
	return (0);
}
