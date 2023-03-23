#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list ap;
	char *str;
	const char args[] = "cifs";

	va_start(ap, format);

	while (format && format[i])
	{
		while(args[j])
		{
			if (format[i] == args[j])
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
				break;
		} i++;
	}
	printf("\n");
	va_end(ap);
}
