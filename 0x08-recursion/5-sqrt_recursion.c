#include "main.h"

int find_the_sqrt(int numb, int root);

/**
 * _sqrt_recusion - returns natural square root of number
 * @n: number param
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_the_sqrt(n, 0));
}

/**
 * find_the_sqrt - finds sqrt of a number by recursion
 * @numb: number param
 * @rt: iterator param
 * Return: square root
 */
int find_the_sqrt(int numb, int rt)
{
	if (rt * rt > numb)
		return (-1);
	if (rt * rt == numb)
		return (rt);
	return (find_the_sqrt(numb, rt + 1));
}
