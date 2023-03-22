#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - entry void
 * @name: to be passed to f function
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
