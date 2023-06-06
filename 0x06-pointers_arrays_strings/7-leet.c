#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: string param
 * Return: pointer to str
 */

char *leet(char *s)
{
	int i, j;
	int s1[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
	i = 0;

	while (s[i])
	{
		for (j = 0; j < 7; j++)
		{
			if (s[i] == s1[j] || s[i] - 32 == s1[j])
			{
				s[i] = j + '0';
			}
		}
		i++;
	}
	return (s);
}
