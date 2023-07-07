#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * f4 - entr
 * @usrn: var
 * @len: var
 * Return: biggest number
 */
int f4(char *usrn, int len)
{
	int n;
	int v;
	unsigned int ran;

	n = *usrn;
	v = 0;

	while (v < len)
	{
		if (n < usrn[v])
			n = usrn[v];
		v += 1;
	}

	srand(n ^ 14);
	ran = rand();

	return (ran & 63);
}
/**
 * f5 - entry
 * @usrn: var
 * @len: var
 * Return: char
 */
int f5(char *usrn, int len)
{
	int v;
	int n = v = 0;

	while (v < len)
	{
		n = n + usrn[v] * usrn[v];
		v += 1;
	}

	return (((unsigned int)n ^ 239) & 63);
}
/**
 * f6 - entry
 * @usrn: var
 * Return: random 
 */
int f6(char *usrn)
{
	int v;
	int n = v = 0;

	while (v < *usrn)
	{
		n = rand();
		v += 1;
	}

	return (((unsigned int)n ^ 229) & 63);
}
/**
 * main - Entry
 * @argc: var
 * @argv: var
 * Return: 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, n, v;
	long al[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;
	for (len = 0; argv[1][len]; len++)
		;
	keygen[0] = ((char *)al)[(len ^ 59) & 63];
	n = v = 0;
	while (v < len)
	{
		n = n + argv[1][v];
		v = v + 1;
	}
	keygen[1] = ((char *)al)[(n ^ 79) & 63];
	n = 1;
	v = 0;
	while (v < len)
	{
		n = argv[1][v] * n;
		v = v + 1;
	}
	keygen[2] = ((char *)al)[(n ^ 85) & 63];
	keygen[3] = ((char *)al)[f4(argv[1], len)];
	keygen[4] = ((char *)al)[f5(argv[1], len)];
	keygen[5] = ((char *)al)[f6(argv[1])];
	keygen[6] = '\0';
	for (n = 0; keygen[n]; n++)
		printf("%c", keygen[n]);
	return (0);
}
