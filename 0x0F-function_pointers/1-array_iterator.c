#include "function_pointers.h"

/**
 * array_iterator - executes a func given as param on each element of array
 * @array: array param
 * @size: size of the array
 * @action: func pointer
 */
void array_iterator(int *array, size_t size, void (*array)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
