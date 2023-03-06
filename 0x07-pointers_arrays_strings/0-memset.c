#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *mem = s, value = c;

	for (i  = 0; i < n; i++)
	{
		mem[i] = value;
	}
	return (mem);
}
