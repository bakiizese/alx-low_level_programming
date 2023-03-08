#include "main.h"
int prime(int n, int i);
/**
 * is_prime_number - entry
 * @n: var
 * Return: prm
 */
int is_prime_number(int n)
{
	int check;
	int k = (n / 2) - 1;

	check = (prime(n, k));
	if (check == 1)
		return (1);
	else
		return (0);
}
/**
 * prime - sentry
 * @n: var
 * @i: var
 * Return: prm
 */
int prime(int n, int i)
{
	if (i == 1)
		return(1);
	else
	{
		if (n % i == 0)
			return (0);
		else
			return (prime(n, i - 1));
	}
}
