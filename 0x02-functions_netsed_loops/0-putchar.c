#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char chr[] = "_putchar";
	int count = 0;

	for (; count < 8; count++)
	{
		putchar(chr[count]);
	}
	putchar('\n');
	return (0);
}
