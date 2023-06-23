#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: Lists types of args
 */
void print_all(const char * const format, ...)
{
	va_list arglist;
	unsigned int i = 0;
	char *str;

	va_start(arglist, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(arglist, int));
				break;
			case 'i':
				printf("%d", va_arg(arglist, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(arglist, double));
				break;
			case 's':
				str = va_arg(arglist, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	va_end(arglist);
	printf("\n");
}
