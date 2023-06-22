#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its params
 * @n: number of args
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list additionlist;
	int sum = 0;

	va_start(additionlist, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(additionlist, int);
	va_end(additionlist);
	return (sum);
}
