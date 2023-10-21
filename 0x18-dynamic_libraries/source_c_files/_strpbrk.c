#include "main.h"

/**
 * _strpbrk - searches a srting for amy set of bytes
 * @s: string param
 * @accept: string param contaning accepted bytes
 * Return: pointer to bytes in @s that matches bytes in @accept
 * or Null if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
