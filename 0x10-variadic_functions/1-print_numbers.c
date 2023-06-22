#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: string to print between numbers
 * @n: integers passed to function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list varialist;
	unsigned int i;

	va_start(varialist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(varialist, int));
		if (separator && (i < (n - 1)))
			printf("%s", separator);
	}
	va_end(varialist);
	printf("\n");
}
