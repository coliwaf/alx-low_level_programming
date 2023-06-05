#include "main.h"

/**
 * string_toupper - change lowercase to upper
 * @s: str param
 * Return: pointer to changed string
 */
char *string_toupper(char *s)
{
	int idx = 0;

	while (s[idx])
	{
		if (s[idx] >= 'a' && s[idx] <= 'z')
		{
			s[idx] -= 32;
		}
		idx++;
	}
	return (s);
}
