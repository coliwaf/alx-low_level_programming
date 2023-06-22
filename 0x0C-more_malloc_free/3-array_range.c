#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates arr of ints
 * @min: min in range param
 * @max: max in range param
 * Return: NULL if min greater than max,
 * NULL if malloc fails, else on Success,
 * returns pointer to created array ordered min to max
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
