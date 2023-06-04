#include "main.h"

/**
 * reverse_array - reverses elements of an array
 * @a: array param
 * @n: number of array elements param
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, tmp;
	i = 0;

	n = n - 1;
	while (i <= n)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n--] = tmp;
	}
}
