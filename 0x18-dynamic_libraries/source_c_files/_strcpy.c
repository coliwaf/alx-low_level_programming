#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination string param
 * @src: source string param
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int idx, len;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (idx = 0; idx < len; idx++)
	{
		dest[idx] = src[idx];
	}
	dest[idx] = '\0';
	return (dest);
}
