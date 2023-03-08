#include "main.h"

int sq(int n, int i);

int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}
int sq(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (sq(n, i + 1));
	else
		return (-1);
}
