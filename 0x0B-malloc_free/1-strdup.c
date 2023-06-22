#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory,
 * containing a copy of a string parameter
 * @str: string param
 * Return: NULL if str is Null, Null is insufficient memory was available,
 * On success it returns a pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *copy_two;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	copy_two = malloc(sizeof(char) * (len + 1));
	if (copy_two == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy_two[i] = str[i];
	return (copy_two);
}
