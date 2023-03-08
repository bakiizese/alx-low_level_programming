#include "main.h"

int prime(int n, int i);

int is_prime_number(int n)
{
	int check;

	check = (prime(n, 1));
	if (check == 1)
		return (0);
	else
		return (1);
}
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	else
	{
		if (n % 2 == 0)
			return (0);
		else
			return (prime(n, i - 1));
	}
}
