#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entery
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is Negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is Positive\n", n);
	}
	return (0);
}
