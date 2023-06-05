#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: string param
 * Return: pointer to str
 */

char *leet(char *s)
{
	int i, j;
	int s1[] = {97, 101, 111, 116, 108};
	int s2[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	i = 0;

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == s1[j] || *(s + i) == s2[j])
			{
				*(s + i) = num[i];
				break;
			}
		}
		i++;
	}
	return (s);
}
