#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry
 * @a: var
 * @size: var
 */
void print_diagsums(int *a, int size)
{
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (j = 0; j < size; j++)
	{
		sum1 += a[j];
		a += size;
	}
	a -= size;
	for (j = 0; j < size; j++)
	{
		sum2 += a[j];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
