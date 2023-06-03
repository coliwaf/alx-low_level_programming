#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: int  param one
 * @b: int param two
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
