#include "main.h"
#include <stdio.h>
/**
 * print_array - entry
 * @a: var
 * @n: var
 */
void print_array(int *a, int n)
{
	int i;
	while (a != '\0')
	{
		for (i = 0; i <= n; i++)
		{
			printf("%d", a[i]);
			if (i == 4)
				continue;
			else
				printf(", ");
		}
	}
	printf("\n");
}
