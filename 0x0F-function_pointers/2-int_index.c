#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array param input
 * @size: size of said array
 * @cmp: pointer to func that compares values
 * Return: index of first element that cmp doesn't return 0,
 * if no matches retutn -1, if size <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}

	}
	return (-1);
}

