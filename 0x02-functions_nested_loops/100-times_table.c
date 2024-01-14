#include "main.h"
#include <stdio.h>
/**
 * print_times_table - times table
 * @n: var
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", 0);
		for (j = 1; j <= n; j++)
		{
			if (i != 0)
			{
				printf("%d", j * i);
				if (j < n)
				{
					printf(", ");
				}
				continue;
			}
			printf("%d", 0);
			if (j < n)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
