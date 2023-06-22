#include "main.h"
#include <stdlib.h>

/**
 * _calloc - malloc allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size in bytes of @nmemb elements
 * Return: NULL if nmemb or size is 0,
 * NULL if fails, Pointer to array on Success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (count = 0; count < (nmemb * size); count++)
		ptr[count] = 0;
	
	return (ptr);
}
