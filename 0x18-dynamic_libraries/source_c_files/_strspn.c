#include "main.h"

/**
 * _strspn - gets lenth of prefix substring
 * @s: string segment param
 * @accept: accepted bytes from @s
 * Return: number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; s[i] != '\0'; i++)
	{
		bool = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bool = 0;
				break;
			}
		}
		if (bool)
			break;
	}
	return (i);
}
