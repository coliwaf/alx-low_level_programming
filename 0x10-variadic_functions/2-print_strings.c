#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings plus a new line
 * @separator: char to print between strings
 * @n: total strings passed to function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arglist;
	char *str;

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arglist, char*);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	va_end(arglist);
	printf("\n");
}
