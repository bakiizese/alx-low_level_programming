#include "main.h"
/**
 * isalpha - checker
 * @c: check character
 * return: 1 if c is a letter otherwise 1
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
