#include "main.h"
#include <stdlib.h>
int count(char *i)
{
	int j = 0;

	while (i[j] != '\0')
	{
		j++;
	}
	return (j);
}
char *_strdup(char *str)
{
	int c = count(str);
	char *ptr = (char *)malloc(c * sizeof(char));
	int i;
	if (str == NULL)
		return (NULL);
	if (sizeof(ptr) < sizeof(str))
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < c; i++)
	{
		*(ptr + i) = str[i];
	}
	return (ptr);
}
