#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - entry
 * @format: var
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	int a = 0;
	va_list ap;
	char *str;
	const char args[] = "cifs";

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (args[j])
		{
			if (format[i] == args[j] && a)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), a = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), a = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), a = 1;
				break;
			case 's':
				str = va_arg(ap, char *), a = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				} printf("%s", str);
				break;
		} i++;
	} printf("\n"), va_end(ap);
}
