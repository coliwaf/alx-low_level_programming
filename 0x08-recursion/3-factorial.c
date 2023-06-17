#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: integer param
 * Return: -1 error if @n is lower than 0
 * 1 if @n is 0
 * if success return factorial of @n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
