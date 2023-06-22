#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one param
 * @s2: string two param
 * Return: NULL on failure, else return pointer containing @s1 and
 * @s2 concurrently
 */
char *str_concat(char *s1, char *s2)
{
	char *cmbine_str;

	int i, cmbine_i, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		len++;

	cmbine_str = malloc(sizeof(char) * len);

	if (cmbine_str == NULL)
		return (NULL);

	cmbine_i = 0;
	for (i = 0; s1[i] != '\0'; i++)
		cmbine_str[cmbine_i++] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		cmbine_str[cmbine_i++] = s2[i];

	return (cmbine_str);
}
