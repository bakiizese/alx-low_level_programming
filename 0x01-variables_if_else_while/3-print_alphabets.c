#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (seccess)
 */
int main(void)
{
	char i = 'a';
	char j = 'A';

	while (i <= 'z')
	{
		i++;
		putchar(i);
	}
	while (j <= 'Z')
	{
		j++;
		putchar(j);
	}
	putchar('\n');
	return (0);
}
