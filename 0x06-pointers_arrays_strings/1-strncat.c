#include "main.h"

/**
  * _strncat - concatenates two strings
  * @dest: destination char
  * @src: source char
  * @n: limit in integer form
  * Return: the pointer to destination
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}

	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i + n + 1] = '\0';
	return (dest);
}
