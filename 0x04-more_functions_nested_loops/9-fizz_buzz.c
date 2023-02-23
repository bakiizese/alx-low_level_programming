#include "main.h"
#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
			continue;
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz");
				printf(" ");
			}
			continue;
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
