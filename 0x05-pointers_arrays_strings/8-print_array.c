#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array of integers
 * @a: the array of integers
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", a[idx]);
		if (idx == (n - 1))
			continue;
		printf(", ");
	}
	printf("\n");
}
