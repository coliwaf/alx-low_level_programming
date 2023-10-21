#include "main.h"

/**
 * _strncat -  concatenates two strings
 * @dest: pointer to string that will be concatenated on
 * @src: string to be appended
 * @n: max bytes used
 * Return: pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}

	dest += '\0';

	return (dest);
}
