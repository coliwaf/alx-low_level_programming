#include "main.h"

/**
 * _memcpy - fills memory with constant byte
 * @dest: memory area to copy to param
 * @src: memory area to copy from
 * @n: number of times to copy @b
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (s);
}
