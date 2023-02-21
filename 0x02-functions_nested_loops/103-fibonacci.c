#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int a = 0;
	long c = 1, b = 2, sum = b;

	while (b + c < 4000000)
	{
		b += c;
		if (b % 2 == 0)
		sum += b;
		c = b - c;
		++a;
	}
	printf("%ld\n", sum);
	return (0);
}
