#include "main.h"

/**
  * _strspn - gets the length of a substring
  * @s: source string
  * @accept: expected string after execution
  *
  * Return: number of bytes in the init segment coresponding to accept
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, k = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				k++;
			}

			j++;
		}

		i++;
	}

	return (k);
}
