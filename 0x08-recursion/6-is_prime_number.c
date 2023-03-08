#include "main.h"

int is_prime_number(int n)
{
	int i = n/2;

	if (i == 1)
		return (1);
	else
	{
		if (n % i == 0)
		{
			return 0;
		}
		else
		{
			return (1);
		}
	}
}
