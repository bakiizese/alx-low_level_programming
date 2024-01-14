#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int a = 0;
	long c = 1, b = 2;

	while (a < 50)
	{
		if (a == 0)
			printf("%ld", c);
		else if (a == 1)
			printf(", %ld", b);
		else
		{
			b += c;
			c = b - c;
			printf(", %ld", b);
		}
		++a;
	}
	printf("\n");
	return (0);
}
