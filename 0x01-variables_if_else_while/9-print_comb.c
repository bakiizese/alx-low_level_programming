#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num+'0');
		putchar(',');
		putchar(' ');
		++num;
	}
	putchar('\n');
	return (0);
}
