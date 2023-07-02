#include "3-calc.h"

/**
 * op_add - calculate sum of two integers
 * @a: first integer param
 * @b: second integer param
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates difference between two integers
 * @a: first integer param
 * @b: second integer param
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate multiplication of two integers
 * @a: first integer param
 * @b: second integer param
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculate division btwn two integers
 * @a: first integer param
 * @b: second integer param
 * Return: a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates modulo of two integers
 * @a: first integer param
 * @b: second integer param
 * Return: remainder of a divided by b (its modulo)
 */
int op_mod(int a, int b)
{
	return (a % b);
}
