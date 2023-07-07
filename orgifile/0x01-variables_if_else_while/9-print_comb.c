#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int num = 0;

	for ( ; num <= 9; num++)
	{
		putchar(num + '0');
		if (num == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
