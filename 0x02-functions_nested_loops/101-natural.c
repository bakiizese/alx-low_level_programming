#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int i;
	int j = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			j += i;
		}
	}
	printf("%d", j);
	return (0);
}
