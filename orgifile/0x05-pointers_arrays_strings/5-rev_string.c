#include "main.h"
#include <string.h>
/**
 * rev_string - entry
 * @s: var
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char n;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;
	while (j < i)
	{
		n = s[i];
		s[i] = s[j];
		s[j] = n;
		j++;
		i--;
	}
}
