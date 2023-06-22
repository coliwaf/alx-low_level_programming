#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - malloc allocates memory or exits if failed
 * @b: quantity of bytes to allocate
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr_alloc;

	ptr_alloc = malloc(b);

	if (ptr_alloc == NULL)
		exit(98);
	return (ptr_alloc);
}
