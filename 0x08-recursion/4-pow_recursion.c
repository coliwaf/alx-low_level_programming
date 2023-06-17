#include "main.h"

/**
 * _pow_recursion - returns the val of x raised to power of y
 * @x: int param one
 * @y: int param two
 * Return: power of @x and @y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(y -1));
}
