#include <stdio.h>
/**
 * fibp - entry
 * @n: var
 */
void fibp(int n)
{
	int a = 1, b = 2, i = 3;

	printf("%d, %d", a, b);

	for (i = 3; i <= n; ++i)
	{
		int next = a + b;

		printf(", %d", next);
		a = b;
		b = next;
	}
}
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int n = 98;

	fibp(n);
	printf("\n");

	return (0);
}
