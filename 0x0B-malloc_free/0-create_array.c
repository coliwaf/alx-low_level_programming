#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars then
 * initializes it with a specific char
 * @size: size of source array to initialize
 * @c: specific char to initialize with
 * Return: null if @size is 0, null if it fails else
 * returns pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(c) * size);

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
