#include "3-calc.h"
/**
 * get_op_func - entry
 * @s: char
 * Return: op
 */
int (*get_op_func(char *s))(int, int)
{
	op_t opr[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (opr[i].op)
	{
		if (strcmp(opr[i].op, s) == 0)
			return (opr[i].f);
		i++;
	}
	return (NULL);
}
